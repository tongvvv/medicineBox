#include "wifi_page.h"
#include "ui_wifi_page.h"

wifi_page::wifi_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wifi_page)
{
    ui->setupUi(this);

    //仅供测试使用！
    for(int ii=0; ii<10;ii++)
    {
    QListWidgetItem *item = new QListWidgetItem();
    ui->listWidget->addItem(item);

    // 创建自定义Widget
    wifi_item *customWidget = new wifi_item(this);

    // 将自定义Widget关联到列表项
    ui->listWidget->setItemWidget(item, customWidget);

    // 调整项大小以适应自定义Widget
    item->setSizeHint(customWidget->sizeHint());
    }
}

wifi_page::~wifi_page()
{
    delete ui;
}
