#include "plan_card.h"
#include "ui_plan_card.h"

plan_card::plan_card(MedReminderTask info, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::plan_card)
{
    ui->setupUi(this);

    /*
        ！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
        这行代码启用样式表， 否则样式表是无法产生效果的。
        因为我们这个类仅仅继承了QWidget，而QWidget并没有在实现中定义这个属性。
    */
    this->setAttribute(Qt::WA_StyledBackground, true);

    ui->no->setText(QString::number(info.no));

}

plan_card::~plan_card()
{
    delete ui;
}
