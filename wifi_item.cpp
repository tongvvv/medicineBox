#include "wifi_item.h"
#include "ui_wifi_item.h"
#include <QDebug>

wifi_item::wifi_item(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::wifi_item)
{
    ui->setupUi(this);

    this->setAttribute(Qt::WA_StyledBackground, true);
}

wifi_item::~wifi_item()
{
    delete ui;
}

void wifi_item::on_pushButton_clicked()
{
    qDebug() << "连接" ;
}

