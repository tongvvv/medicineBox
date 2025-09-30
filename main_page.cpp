#include "main_page.h"
#include "ui_main_page.h"

main_page::main_page(QWidget *parent, signal_route *router)
    : QWidget(parent)
    , ui(new Ui::main_page)
    , m_router(router)
{
    ui->setupUi(this);
}

main_page::~main_page()
{
    delete ui;
}



void main_page::on_main_fetch_clicked()
{
    if(m_router)
        emit m_router->switchToPage("med_list");
}


void main_page::on_med_list_clicked()
{
    on_main_fetch_clicked();
}

