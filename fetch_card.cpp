#include "fetch_card.h"
#include "ui_fetch_card.h"

fetch_card::fetch_card(QWidget *parent, signal_route *router)
    : QWidget(parent)
    , ui(new Ui::fetch_card)
    , m_router(router)
{
    ui->setupUi(this);
}

fetch_card::~fetch_card()
{
    delete ui;
}


void fetch_card::on_med_info_clicked()
{
    if(m_router)
        emit m_router->switchToPage("medcine_information1");
}

