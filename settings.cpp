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

    m_wifi = new wifi_page(this);
    ui->stackedWidget->addWidget(m_wifi);
    ui->stackedWidget->setCurrentWidget(m_wifi);

    m_basic = new basic_settings_page(this);
    ui->stackedWidget->addWidget(m_basic);

    m_inform = new inform_settings_page(this);
    ui->stackedWidget->addWidget(m_inform);

    m_emerg = new emergency_page(this);
    ui->stackedWidget->addWidget(m_emerg);
}

settings::~settings()
{
    delete ui;
}

void settings::on_back_clicked()
{
    ui->wifi->setChecked(true);
    emit signal_route::instance()->switchToPage("main_page");
}

void settings::setting_selector(bool checked)
{
    if(checked == false)
        return;

    auto *button = qobject_cast<QPushButton*>(sender());

    if(button->objectName() == "wifi")
    {
        ui->stackedWidget->setCurrentWidget(m_wifi);
    }
    else if(button->objectName() == "basic")
    {
        ui->stackedWidget->setCurrentWidget(m_basic);
    }
    else if(button->objectName() == "inform")
    {
        ui->stackedWidget->setCurrentWidget(m_inform);
    }
    else if(button->objectName() == "emergency")
    {
        ui->stackedWidget->setCurrentWidget(m_emerg);
    }
}
