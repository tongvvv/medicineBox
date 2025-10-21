#include "main_page.h"
#include "ui_main_page.h"

main_page::main_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_page)
{
    ui->setupUi(this);
}

main_page::~main_page()
{
    delete ui;
}



void main_page::on_main_fetch_clicked()
{
    emit signal_route::instance()->switchToPage("med_list");
}


void main_page::on_med_list_clicked()
{
    emit signal_route::instance()->switchToPage("med_list_nofetch");
}


void main_page::on_main_store_clicked()
{
    emit signal_route::instance()->switchToPage("store_page");
}


void main_page::on_special_med_clicked()
{
    emit signal_route::instance()->switchToPage("special_med_inform");
}

