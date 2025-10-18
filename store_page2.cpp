#include "store_page2.h"
#include "ui_store_page2.h"

store_page2::store_page2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page2)
{
    ui->setupUi(this);
}

store_page2::~store_page2()
{
    delete ui;
}
