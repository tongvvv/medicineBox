#include "usage_plan.h"
#include "ui_usage_plan.h"
#include "signal_route.h"
#include <QGraphicsDropShadowEffect>
#include <qDebug>


usage_plan::usage_plan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usage_plan)
{
    ui->setupUi(this);

    connect(ui->date0, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date1, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date2, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date3, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date4, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date5, &QPushButton::toggled, this, &usage_plan::date_selecter);
    connect(ui->date6, &QPushButton::toggled, this, &usage_plan::date_selecter);

    ui->date3->setChecked(true);

    update_date();
}

usage_plan::~usage_plan()
{
    delete ui;
}

void usage_plan::on_back_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}

void usage_plan::date_selecter(bool checked)
{
    if(checked == false)
        return;

    auto *button = qobject_cast<QPushButton*>(sender());
    auto date = button->property("buttonDate").toDate();

    qDebug() << date;
}

void usage_plan::update_date()
{
    auto now = QDate::currentDate();

    ui->date0->setProperty("buttonDate", QVariant::fromValue(now.addDays(-3)));
    ui->date0->setText(now.addDays(-3).toString("MM月dd日"));
    ui->date1->setProperty("buttonDate", QVariant::fromValue(now.addDays(-2)));
    ui->date1->setText(now.addDays(-2).toString("MM月dd日"));
    ui->date2->setProperty("buttonDate", QVariant::fromValue(now.addDays(-1)));
    ui->date2->setText(now.addDays(-1).toString("MM月dd日"));
    ui->date3->setProperty("buttonDate", QVariant::fromValue(now));
    ui->date3->setText(now.toString("MM月dd日"));
    ui->date4->setProperty("buttonDate", QVariant::fromValue(now.addDays(1)));
    ui->date4->setText(now.addDays(1).toString("MM月dd日"));
    ui->date5->setProperty("buttonDate", QVariant::fromValue(now.addDays(2)));
    ui->date5->setText(now.addDays(2).toString("MM月dd日"));
    ui->date6->setProperty("buttonDate", QVariant::fromValue(now.addDays(3)));
    ui->date6->setText(now.addDays(3).toString("MM月dd日"));
}
