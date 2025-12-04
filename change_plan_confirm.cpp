#include "change_plan_confirm.h"
#include "ui_change_plan_confirm.h"

change_plan_confirm::change_plan_confirm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change_plan_confirm)
{
    ui->setupUi(this);
}

change_plan_confirm::~change_plan_confirm()
{
    delete ui;
}

store_page4 *change_plan_confirm::getpage4()
{
    return ui->store4;
}

