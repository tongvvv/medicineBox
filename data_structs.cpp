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

    // 查询数量为0或NULL且编号最小的药箱
    QString sql = R"(
        SELECT no FROM med_box
        WHERE (m_number = 0 OR m_number IS NULL)
        ORDER BY no ASC
        LIMIT 1
    )";

    if (!query.exec(sql))
    {
        qCritical() << "查询空药箱失败:" << query.lastError().text();
        return -1; // 查询失败
    }

    if (query.next())
    {
        int emptyBoxNo = query.value(0).toInt();
        qDebug() << "找到空药箱，编号:" << emptyBoxNo;
        return emptyBoxNo;
    }
    else
    {
        qDebug() << "未找到空药箱";
        return -2; // 返回-2表示没有空药箱
    }
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

void data_manager::remove(const QString &key)
{
    QWriteLocker locker(&m_dataLock);
    m_dataMap.remove(key);
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
            lasteat DATETIME
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

    // 4. 批量插入0~23条基础数据
    QString insertSQL = "INSERT INTO med_box (no) VALUES (?)";

    if (!query.exec("BEGIN TRANSACTION")) {
        qCritical() << "开启事务失败:" << query.lastError().text();
        return false;
    }

    query.prepare(insertSQL);

    for (int i = 0; i < 24; ++i) {
        query.addBindValue(i);

        if (!query.exec()) {
            qCritical() << "插入数据失败(no=" << i << "):" << query.lastError().text();
            query.exec("ROLLBACK");
            return false;
        }
    }

    if (!query.exec("COMMIT")) {
        qCritical() << "提交事务失败:" << query.lastError().text();
        return false;
    }

    qDebug() << "成功插入0~23条基础数据";

    return true;
}
