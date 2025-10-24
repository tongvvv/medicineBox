#include "settings.h"
#include "ui_settings.h"
#include "signal_route.h"
#include <QDebug>

settings::settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::settings)
{
    ui->setupUi(this);

    connect(ui->wifi, &QPushButton::toggled, this, &settings::setting_selector);
    connect(ui->basic, &QPushButton::toggled, this, &settings::setting_selector);
    connect(ui->inform, &QPushButton::toggled, this, &settings::setting_selector);
    connect(ui->emergency, &QPushButton::toggled, this, &settings::setting_selector);

    ui->wifi->setChecked(true);
}

settings::~settings()
{
    delete ui;
}

void settings::on_back_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}

void settings::setting_selector(bool checked)
{
    if(checked == false)
        return;

    auto *button = qobject_cast<QPushButton*>(sender());

    if(button->objectName() == "wifi")
    {
        qDebug() << "wifi";
    }
    else if(button->objectName() == "basic")
    {
        qDebug() << "basic";
    }
    else if(button->objectName() == "inform")
    {
        qDebug() << "inform";
    }
    else if(button->objectName() == "emergency")
    {
        qDebug() << "emergency";
    }
}
