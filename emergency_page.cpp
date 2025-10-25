#include "emergency_page.h"
#include "ui_emergency_page.h"

emergency_page::emergency_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::emergency_page)
{
    ui->setupUi(this);
    ui->phone_num->setInputMask("99999999999");
}

emergency_page::~emergency_page()
{
    delete ui;
}
