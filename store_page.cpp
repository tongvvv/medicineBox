#include "store_page.h"
#include "ui_store_page.h"

store_page::store_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page)
{
    ui->setupUi(this);
    page1 = new store_page1(this);
    ui->stackedWidget->addWidget(page1);
    ui->stackedWidget->setCurrentWidget(page1);

    page2 = new store_page2(this);
    ui->stackedWidget->addWidget(page2);

    page3 = new store_page3(this);
    ui->stackedWidget->addWidget(page3);

    page4 = new store_page4(this);
    ui->stackedWidget->addWidget(page4);

    connect(page1->findChild<QPushButton*>("next"), &QPushButton::clicked, this, &store_page::change_page2);
    connect(page1->findChild<QPushButton*>("skip"), &QPushButton::clicked, this, &store_page::skip_page2);
    connect(page2->findChild<QPushButton*>("next"), &QPushButton::clicked, this, &store_page::change_page3);
    connect(page3->findChild<QPushButton*>("next"), &QPushButton::clicked, this, &store_page::change_page4);
    connect(page3->findChild<QPushButton*>("skip"), &QPushButton::clicked, this, &store_page::skip_page4);
}

store_page::~store_page()
{
    delete ui;
}

void store_page::on_back_main_page_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}

void store_page::label2white(QLabel *label)
{
    label->setStyleSheet(
        "QLabel {"
        "    min-width:     70px;"
        "    min-height:    70px;"
        "    max-width:     70px;"
        "    max-height:    70px;"
        "    border-radius: 35px;"
        "    border:        1px solid black;"
        "    background:    white;"
        "    color:         black;"
        "}"
        );
}

void store_page::label2blue(QLabel *label)
{
    label->setStyleSheet(
        "QLabel {"
        "    min-width:     70px;"
        "    min-height:    70px;"
        "    max-width:     70px;"
        "    max-height:    70px;"
        "    border-radius: 35px;"
        "    border:        1px solid black;"
        "    background:    rgb(23, 201, 255);"
        "    color:         white;"
        "}"
        );
}

void store_page::all_label_white(void)
{
    label2white(ui->num1);
    label2white(ui->num2);
    label2white(ui->num3);
    label2white(ui->num4);
}

void store_page::change_page1()
{
    ui->stackedWidget->setCurrentWidget(page1);
    all_label_white();
    label2blue(ui->num1);
}

void store_page::change_page2()
{
    ui->stackedWidget->setCurrentWidget(page2);
    all_label_white();
    label2blue(ui->num2);
}

void store_page::skip_page2()
{
    ui->stackedWidget->setCurrentWidget(page2);
    all_label_white();
    label2blue(ui->num2);
}

void store_page::change_page3()
{
    ui->stackedWidget->setCurrentWidget(page3);
    all_label_white();
    label2blue(ui->num3);
}

void store_page::change_page4()
{
    ui->stackedWidget->setCurrentWidget(page4);
    all_label_white();
    label2blue(ui->num4);
}

void store_page::skip_page4()
{
    ui->stackedWidget->setCurrentWidget(page4);
    all_label_white();
    label2blue(ui->num4);
}
