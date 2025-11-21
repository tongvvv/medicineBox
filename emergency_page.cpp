#include "emergency_page.h"
#include "qvalidator.h"
#include "ui_emergency_page.h"

emergency_page::emergency_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::emergency_page)
{
    ui->setupUi(this);
    ui->phone_num->setAttribute(Qt::WA_InputMethodEnabled, false);  // 设置禁止中文输入
    ui->phone_num->setPlaceholderText(QString::fromUtf8("请输入手机号")); // 设置默认显示内容
    QRegExp rx("[0-9]{1,11}"); // 正则表达式：数字, 11位
    QRegExpValidator *validator = new QRegExpValidator(rx, this);
    ui->phone_num->setValidator(validator);// 设置正则表达式
}

emergency_page::~emergency_page()
{
    delete ui;
}
