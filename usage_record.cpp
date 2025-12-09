#include "usage_record.h"
#include "qdebug.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "ui_usage_record.h"
#include "signal_route.h"

usage_record::usage_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usage_record)
    , currentpage(1)
{
    ui->setupUi(this);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Fixed);  // 时间列固定宽度
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::ResizeToContents); // 服药人按内容调整
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Fixed);      // 动作列固定宽度
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);    // 药名自动拉伸
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(4, QHeaderView::ResizeToContents); // 数量列按内容
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(5, QHeaderView::Fixed);   // 药盒编号固定宽度

    // 设置初始列宽
    ui->tableWidget->setColumnWidth(0, 300);
    ui->tableWidget->setColumnWidth(2, 100);
    ui->tableWidget->setColumnWidth(5, 150);

    // 启用文本换行
    ui->tableWidget->setWordWrap(true);
    ui->tableWidget->resizeRowsToContents();

    //设置行高
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(35);

    // 设置表格为只读，不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // 禁用选择功能
    ui->tableWidget->setSelectionMode(QAbstractItemView::NoSelection);

    ui->tableWidget->setFocusPolicy(Qt::NoFocus);

    font.setPointSize(15);
}

usage_record::~usage_record()
{
    delete ui;
}

void usage_record::update_data()
{
    QSqlQuery query;
    query.prepare("select p_name,m_name from pname_mname");

    // 清空原有数据
    userTomed.clear();

    if (query.exec())
    {
        while (query.next())
        {
            QString userName = query.value(0).toString();
            QString medicineName = query.value(1).toString();

            // 检查用户是否已存在
            if (!userTomed.contains(userName)) {
                userTomed[userName] = QList<QString>();
            }

            // 将药品名添加到该用户的列表中
            userTomed[userName].append(medicineName);
        }
    }
    else
    {
        qDebug() << "查询pname_mname表失败:" << query.lastError().text();
    }

    ui->p_name->clear();
    ui->m_name->clear();

    for (const QString& userName : userTomed.keys())
    {
        ui->p_name->addItem(userName);
    }

    ui->p_name->setCurrentIndex(0);
    currentpage=1; //调整页数
    ui->dateEdit->setDate(QDate::currentDate());
}

void usage_record::addItem(unsigned int row, unsigned int col, const QString& str)
{
    QTableWidgetItem *item = new QTableWidgetItem();
    item->setTextAlignment(Qt::AlignCenter);
    item->setFont(font);
    item->setText(str);
    ui->tableWidget->setItem(row, col, item);
}

void usage_record::addContent(unsigned int row, table_content content)
{
    addItem(row, 0, content.datetime.toString("yyyy-MM-dd HH:mm"));
    addItem(row, 1, content.person_name);
    addItem(row, 2, ACTION_TO_STRING(content.action));
    addItem(row, 3, content.med_name);
    addItem(row, 4, QString::number(content.num));
    addItem(row, 5, QString::asprintf("%02d号盒",content.box));
}

void usage_record::on_back_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}

void usage_record::on_Last_clicked()
{
    if(currentpage == 1){return;}
    currentpage--;
    do_search();
}

void usage_record::on_next_clicked()
{
    if(currentpage == totalpage) {return;}
    currentpage++;
    do_search();
}

void usage_record::on_p_name_currentIndexChanged(int index)
{
    ui->m_name->clear();

    QString text = ui->p_name->currentText();
    // 如果选择了有效的用户名
    if (!text.isEmpty() && userTomed.contains(text))
    {
        // 获取该用户对应的药品列表
        QList<QString> medicines = userTomed[text];

        // 将药品添加到下拉框
        for (const QString& medicine : medicines)
        {
            ui->m_name->addItem(medicine);
        }

        ui->m_name->setCurrentIndex(0);
    }
}

void usage_record::on_m_name_currentIndexChanged(int index)
{
    if (index < 0) return;  // 无效索引
    getpages();
    do_search();
}

void usage_record::cleartable()
{
    ui->tableWidget->clearContents();
}

void usage_record::on_dateEdit_userDateChanged(const QDate &date)
{
    getpages();
    do_search();
}

void usage_record::do_search()
{
    // 获取选择的用户、药品和日期
    QString userName = ui->p_name->currentText();
    QString medicineName = ui->m_name->currentText();
    QDate selectedDate = ui->dateEdit->date();

    if (userName.isEmpty() || medicineName.isEmpty())
    {
        return;
    }

    // 构建日期范围查询，不使用DATE函数以便使用索引
    QDateTime startDateTime(selectedDate, QTime(0, 0, 0));
    QDateTime endDateTime(selectedDate, QTime(23, 59, 59));

    QSqlQuery query;
    if(userName != "未知")
    {
        // 构建查询
        query.prepare(
            "SELECT use_time, use_pname, use_action, use_mname, use_num, use_no "
            "FROM use_record "
            "WHERE use_pname = :pname AND use_mname = :mname "
            "AND use_time >= :startTime AND use_time <= :endTime "
            "ORDER BY use_time limit 5 offset :page"
            );
        query.bindValue(":pname", userName);
    }
    else
    {
        // 构建查询
        query.prepare(
            "SELECT use_time, use_pname, use_action, use_mname, use_num, use_no "
            "FROM use_record "
            "WHERE use_pname is null AND use_mname = :mname "
            "AND use_time >= :startTime AND use_time <= :endTime "
            "ORDER BY use_time limit 5 offset :page"
            );
    }
    query.bindValue(":mname", medicineName);
    query.bindValue(":startTime", startDateTime.toString("yyyy-MM-dd HH:mm:ss"));
    query.bindValue(":endTime", endDateTime.toString("yyyy-MM-dd HH:mm:ss"));
    query.bindValue(":page", (currentpage-1)*5);

    // 清空之前的记录
    cleartable();

    //处理每一天数据
    int row=0;
    if (query.exec())
    {
        while (query.next())
        {
            table_content record;
            record.datetime = query.value(0).toDateTime();
            record.person_name = query.value(1).toString();

            // 将int转换为Action枚举
            int actionInt = query.value(2).toInt();
            record.action = static_cast<Action>(actionInt);

            record.med_name = query.value(3).toString();
            record.num = query.value(4).toInt();
            record.box = query.value(5).toInt();

            addContent(row, record);
            row++;
        }
    }
}

void usage_record::getpages()
{
    // 获取选择的用户、药品和日期
    QString userName = ui->p_name->currentText();
    QString medicineName = ui->m_name->currentText();
    QDate selectedDate = ui->dateEdit->date();

    if (userName.isEmpty() || medicineName.isEmpty())
    {
        return;
    }

    // 构建日期范围查询，不使用DATE函数以便使用索引
    QDateTime startDateTime(selectedDate, QTime(0, 0, 0));
    QDateTime endDateTime(selectedDate, QTime(23, 59, 59));

    QSqlQuery countQuery;
    if(userName != "未知")
    {
        countQuery.prepare(
            "SELECT COUNT(*) "
            "FROM use_record "
            "WHERE use_pname = :pname AND use_mname = :mname "
            "AND use_time >= :startTime AND use_time <= :endTime"
            );
        countQuery.bindValue(":pname", userName);
    }
    else
    {
        countQuery.prepare(
            "SELECT COUNT(*) "
            "FROM use_record "
            "WHERE use_pname is null AND use_mname = :mname "
            "AND use_time >= :startTime AND use_time <= :endTime"
            );
    }

    countQuery.bindValue(":mname", medicineName);
    countQuery.bindValue(":startTime", startDateTime.toString("yyyy-MM-dd HH:mm:ss"));
    countQuery.bindValue(":endTime", endDateTime.toString("yyyy-MM-dd HH:mm:ss"));

    if (countQuery.exec() && countQuery.next())
    {
        totalpage = countQuery.value(0).toInt();
    }

    totalpage = (totalpage+ 5 - 1) / 5;  //向上取整得到总的页数。
}
