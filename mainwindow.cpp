#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_router = new signal_route(this);

    connect(m_router, &signal_route::switchToPage,
            this, &MainWindow::handleSwitchToPage);


    mainpage = new main_page(this, m_router);
    ui->stackedWidget->addWidget(mainpage);
    ui->stackedWidget->setCurrentWidget(mainpage);

    medlist = new med_list(this, m_router);
    ui->stackedWidget->addWidget(medlist);

    medinfo = new medcine_information(this, m_router);
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
