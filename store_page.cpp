#include "store_page.h"
#include "ui_store_page.h"

store_page::store_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page)
{
    ui->setupUi(this);
    page1 = new store_page1(this);
    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->setCurrentWidget(page1);
}

store_page::~store_page()
{
    delete ui;
}

void store_page::on_back_main_page_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}

