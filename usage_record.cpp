#include "usage_record.h"
#include "ui_usage_record.h"
#include "signal_route.h"

usage_record::usage_record(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usage_record)
    , page(0)
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
    addItem(row, 4, content.num + content.unit);
    addItem(row, 5, QString::asprintf("%02d号盒",content.box));
}

void usage_record::on_back_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}


void usage_record::on_Last_clicked()
{

}


void usage_record::on_next_clicked()
{

}

