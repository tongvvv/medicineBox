#include "fetch_card.h"
#include "ui_fetch_card.h"

fetch_card::fetch_card(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::fetch_card)
{
    ui->setupUi(this);
}

fetch_card::~fetch_card()
{
    delete ui;
}


void fetch_card::on_med_info_clicked()
{
    emit signal_route::instance()->switchToPage("medcine_information1");
}

