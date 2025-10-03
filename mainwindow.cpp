#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(signal_route::instance(), &signal_route::switchToPage,
            this, &MainWindow::handleSwitchToPage);


    mainpage = new main_page(this);
    ui->stackedWidget->addWidget(mainpage);
    ui->stackedWidget->setCurrentWidget(mainpage);

    medlist = new med_list(this);
    ui->stackedWidget->addWidget(medlist);

    medinfo = new medcine_information(this);
    ui->stackedWidget->addWidget(medinfo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSwitchToPage(const QString &pageName)
{
    if(pageName == "med_list")
    {
        ui->stackedWidget->setCurrentWidget(medlist);
    }
    else if(pageName == "main_page")
    {
        ui->stackedWidget->setCurrentWidget(mainpage);
    }
    else if(pageName == "medcine_information1")
    {
        ui->stackedWidget->setCurrentWidget(medinfo);
    }
}
