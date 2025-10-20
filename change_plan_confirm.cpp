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

void change_plan_confirm::set_change(bool change)
{
    ui->widget_2->setChange(change);
}
