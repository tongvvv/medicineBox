#include "store_page1.h"
#include "ui_store_page1.h"

store_page1::store_page1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page1)
{
    ui->setupUi(this);
}

store_page1::~store_page1()
{
    delete ui;
}
