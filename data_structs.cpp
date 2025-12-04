#include "data_structs.h"
#include <QApplication>
#include <QDir>
#include <QPluginLoader>

data_manager::data_manager(QObject *parent)
    : QObject(parent)
{}

data_manager* data_manager::instance()
{
    static data_manager data;

    return &data;
}

void data_manager::setFontSize(GlobalFontSize size)
{
    fontSize = size;
    emit fontSize_changed(fontSize);
}

//初始化数据
bool data_manager::init()
{
    qDebug() << "库搜索路径:" << QCoreApplication::libraryPaths();
    qDebug() << "可用驱动:" << QSqlDatabase::drivers();

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");

    if (!db.open()) {
        qCritical() << "无法打开数据库:" << db.lastError().text();
        return false;
    }

    qDebug() << "数据库连接成功:" << "medication.db";

    if (isFirstRun())
    {
        if (!createTables())
        {
            return false;
        }
        qDebug() << "数据库首次初始化完成";
    }
    else
    {
        qDebug() << "数据库已存在，跳过初始化";
    }

    return true;
}

int data_manager::get_empty_box()
{
    QSqlQuery query;

    //检查哪些编号不存在
    for (int no = 0; no <= 23; ++no) {
        query.prepare("SELECT 1 FROM med_box WHERE no = :no");
        query.bindValue(":no", no);

        if (query.exec() && !query.next()) {
            qDebug() << "找到空药箱（编号不存在），编号:" << no;
            return no;
        }
    }

    qDebug() << "未找到空药箱";
    return -2; // 没有空药箱
}

void data_manager::setData(const QString &key, const QVariant &value)
{
    QWriteLocker locker(&m_dataLock);
    m_dataMap[key] = value;
}

QVariant data_manager::getData(const QString &key, const QVariant &defaultValue) const
{
    QReadLocker locker(&m_dataLock);
    return m_dataMap.value(key, defaultValue);
}

void data_manager::removeData(const QString &key)
{
    QWriteLocker locker(&m_dataLock);
    m_dataMap.remove(key);
}

void data_manager::store_medcine()
{
    int no = getData("store_no").toInt();
    QString name = getData("store_medname").toString();
    int num = getData("store_mednum").toInt();
    QString user = getData("store_user").toString();
    int freq = getData("store_freq").toInt();
    QString startTime = getData("store_starttime").toDateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString eatTime = getData("store_eattime").toString();
    QString nums = getData("store_nums").toString();

    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM med_box WHERE no = :no");
    deleteQuery.bindValue(":no", no);

    deleteQuery.exec();

    // 插入新数据
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO med_box (no, m_name, m_number, p_name, eatfreq, starttime, eattime, eatcount, lasteat, inform) "
                        "VALUES (:no, :name, :num, :user, :freq, :startTime, :eatTime, :nums, :lasteat, :inform)");

    insertQuery.bindValue(":no", no);
    insertQuery.bindValue(":name", name);
    insertQuery.bindValue(":num", num);
    insertQuery.bindValue(":user", user);
    insertQuery.bindValue(":freq", freq);
    insertQuery.bindValue(":startTime", startTime);
    insertQuery.bindValue(":eatTime", eatTime);
    insertQuery.bindValue(":nums", nums);
    insertQuery.bindValue(":lasteat", QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
    insertQuery.bindValue(":inform", 0); //inform默认0

    if (!insertQuery.exec()) {
        qDebug() << "药品存储失败:" << insertQuery.lastError().text();
        return;
    }

    removeData("store_no");
    removeData("store_medname");
    removeData("store_mednum");
    removeData("store_user");
    removeData("store_freq");
    removeData("store_starttime");
    removeData("store_eattime");
    removeData("store_nums");
    removeData("store_ocr");
    removeData("store_yolo");

    qDebug() << "====== 药品信息更新成功 ======";
    qDebug() << "药盒编号:" << no;
    qDebug() << "药品名称:" << name;
    qDebug() << "药品数量:" << num;
    qDebug() << "服用人:" << user;
    qDebug() << "服用频率: 每" << freq << "天";
    qDebug() << "开始时间:" << startTime;
    qDebug() << "服用时间点:" << eatTime;
    qDebug() << "每次服用数量:" << nums;
    qDebug() << "=============================";
}

void data_manager::setplan()
{
    QSqlQuery query;

    // 获取数据
    int no = getData("setplan_no").toInt();
    QString user = getData("setplan_user").toString();
    int freq = getData("setplan_freq").toInt();
    QDateTime startTime = getData("setplan_starttime").toDateTime();
    QString eatTime = getData("setplan_eattime").toString();
    QString eatNums = getData("setplan_nums").toString();
    QDateTime currentTime = QDateTime::currentDateTime();

    // 准备SQL更新语句
    query.prepare(R"(
        UPDATE med_box
        SET p_name = :user,
            eatfreq = :freq,
            starttime = :starttime,
            eattime = :eattime,
            eatcount = :eatcount,
            lasteat = :lasteat
        WHERE no = :no
    )");

    // 绑定参数
    query.bindValue(":no", no);
    query.bindValue(":user", user);
    query.bindValue(":freq", freq);
    query.bindValue(":starttime", startTime.toString("yyyy-MM-dd HH:mm:ss"));
    query.bindValue(":eattime", eatTime);
    query.bindValue(":eatcount", eatNums);
    query.bindValue(":lasteat", currentTime.toString("yyyy-MM-dd HH:mm:ss"));

    if (!query.exec()) {
        qCritical() << "更新用药计划失败:" << query.lastError().text();
        qDebug() << "SQL错误:" << query.lastQuery();
        qDebug() << "参数 - no:" << no << "user:" << user << "freq:" << freq;
        return;
    }

    qDebug() << "成功更新用药计划，药盒编号:" << no;

    // 清理临时数据
    removeData("setplan_no");
    removeData("setplan_user");
    removeData("setplan_freq");
    removeData("setplan_starttime");
    removeData("setplan_eattime");
    removeData("setplan_nums");
}

QVector<med_detailed_info *> data_manager::getAllMed()
{
    QVector<med_detailed_info *> detailedInfoList;
    // 从数据库获取所有药品信息
    QSqlQuery query;
    QString sql = R"(
        SELECT no, m_name, m_info, m_number, m_picpath, p_name, eatfreq, starttime, eattime, eatcount, lasteat, inform
        FROM med_box
        WHERE no BETWEEN 0 AND 23
        ORDER BY no ASC
    )";

    if (!query.exec(sql))
    {
        qCritical() << "查询所有药品信息失败:" << query.lastError().text();
        return QVector<med_detailed_info *>();
    }

    // 处理查询结果
    while (query.next())
    {
        med_detailed_info* medInfo = new med_detailed_info();

        // 填充基本信息
        medInfo->no = query.value("no").toUInt();
        medInfo->m_name = query.value("m_name").toString();
        medInfo->m_info = query.value("m_info").toString();
        medInfo->number = query.value("m_number").toUInt();
        medInfo->m_picpath = query.value("m_picpath").toString();
        medInfo->p_name = query.value("p_name").toString();
        medInfo->eatfreq = query.value("eatfreq").toUInt();
        medInfo->starttime = query.value("starttime").toDateTime();
        medInfo->lasteat = query.value("lasteat").toDateTime();
        medInfo->inform = query.value("inform").toInt();

        // 解析服药时间和数量
        QString eatTimeStr = query.value("eattime").toString();
        QString eatCountStr = query.value("eatcount").toString();
        medInfo->parseEatInfo(eatTimeStr, eatCountStr);

        detailedInfoList.append(medInfo);
    }

    qDebug() << "成功获取" << detailedInfoList.size() << "条药品信息";
    return detailedInfoList;
}

void data_manager::update_medicine(const med_detailed_info& info)
{
    // 1. 先删除原有数据
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM med_box WHERE no = ?");
    deleteQuery.addBindValue(info.no);

    if (!deleteQuery.exec()) {
        qDebug() << "删除药品数据失败:" << deleteQuery.lastError().text();
        return;
    }

    // 2. 插入新数据
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO med_box (no, m_name, m_info, m_number, m_picpath, p_name, eatfreq, starttime, eattime, eatcount, lasteat, inform) "
                        "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");

    insertQuery.addBindValue(info.no);
    insertQuery.addBindValue(info.m_name);
    insertQuery.addBindValue(info.m_info);
    insertQuery.addBindValue(info.number);
    insertQuery.addBindValue(info.m_picpath);
    insertQuery.addBindValue(info.p_name);
    insertQuery.addBindValue(info.eatfreq);
    insertQuery.addBindValue(info.starttime.toString("yyyy-MM-dd HH:mm:ss"));
    insertQuery.addBindValue(info.eattimesToDbString());
    insertQuery.addBindValue(info.eatcountsToDbString());
    insertQuery.addBindValue(info.lasteat.toString("yyyy-MM-dd HH:mm:ss"));
    insertQuery.addBindValue(info.inform);

    if (!insertQuery.exec()) {
        qDebug() << "插入药品数据失败:" << insertQuery.lastError().text();
        return;
    }

    qDebug() << "药品信息更新成功 - 药盒编号:" << info.no;
}

void data_manager::delete_medicine(const med_detailed_info &info)
{
    QSqlQuery deleteQuery;
    deleteQuery.prepare("DELETE FROM med_box WHERE no = ?");
    deleteQuery.addBindValue(info.no);

    if (!deleteQuery.exec()) {
        qDebug() << "删除药品数据失败:" << deleteQuery.lastError().text();
        return;
    }

    qDebug() << "药品信息删除成功 - 药盒编号:" << info.no;
}

bool data_manager::isFirstRun()
{
    QSqlQuery query;
    // 检查med_box表是否存在
    query.prepare("SELECT name FROM sqlite_master WHERE type='table' AND name='med_box'");

    if (!query.exec()) {
        qCritical() << "检查表是否存在失败:" << query.lastError().text();
        return true; // 如果检查失败，按第一次运行处理
    }

    return !query.next(); // 如果查询不到结果，说明表不存在，是第一次运行
}

// 创建数据库表
bool data_manager::createTables()
{
    QSqlQuery query;

    //1. 创建表格
    QString createTableSQL = R"(
        CREATE TABLE med_box (
            no INTEGER PRIMARY KEY NOT NULL,
            m_name VARCHAR(100),
            m_info TEXT,
            m_number INTEGER DEFAULT 0,
            m_picpath VARCHAR(100),
            p_name VARCHAR(100),
            eatfreq INTEGER DEFAULT 1,
            starttime DATETIME,
            eattime VARCHAR(255),
            eatcount VARCHAR(255),
            lasteat DATETIME,
            inform INTEGER
        );
    )";

    if (!query.exec(createTableSQL)) {
        qCritical() << "创建表失败:" << query.lastError().text();
        return false;
    }

    // 2. 创建第一个索引
    if (!query.exec("CREATE INDEX index_1 ON med_box(m_name)")) {
        qCritical() << "创建索引1失败:" << query.lastError().text();
        return false;
    }

    // 3. 创建第二个索引
    if (!query.exec("CREATE INDEX index_2 ON med_box(p_name, m_name)")) {
        qCritical() << "创建索引2失败:" << query.lastError().text();
        return false;
    }

    qDebug() << "数据库表创建成功";

    return true;
}
