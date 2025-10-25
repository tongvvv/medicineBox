#include "basic_settings_page.h"
#include "ui_basic_settings_page.h"

basic_settings_page::basic_settings_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::basic_settings_page)
{
    ui->setupUi(this);
}

basic_settings_page::~basic_settings_page()
{
    delete ui;
}
