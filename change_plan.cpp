#include "change_plan.h"
#include "ui_change_plan.h"

change_plan::change_plan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::change_plan)
{
    ui->setupUi(this);
}

change_plan::~change_plan()
{
    delete ui;
}

store_page3 *change_plan::getpage()
{
    return ui->page3;
}
