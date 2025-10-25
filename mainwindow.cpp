#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "change_plan.h"
#include "change_plan_confirm.h"

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

    StorePage = new store_page(this);
    ui->stackedWidget->addWidget(StorePage);

    record = new usage_record(this);
    ui->stackedWidget->addWidget(record);

    useplan = new usage_plan(this);
    ui->stackedWidget->addWidget(useplan);

    sets = new settings(this);
    ui->stackedWidget->addWidget(sets);

    qDebug() << size();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleSwitchToPage(const QString &pageName)
{
    if(pageName == "med_list")
    {
        medlist->card_is_fetch(true);
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
    else if(pageName == "med_list_nofetch")
    {
        medlist->card_is_fetch(false);
        ui->stackedWidget->setCurrentWidget(medlist);
    }
    else if(pageName == "store_page")
    {
        ui->stackedWidget->setCurrentWidget(StorePage);
        StorePage->change_page1();
    }
    else if(pageName == "change_plan") //放错药物或识别错误时的修改用药计划界面， 这个页面每次都新建, 但是得记得释放内存
    {
        auto *widget = new change_plan(this);
        ui->stackedWidget->addWidget(widget);
        ui->stackedWidget->setCurrentWidget(widget);

        connect(widget->findChild<QPushButton*>("next"), &QPushButton::clicked, [=](){
            auto *wt = new change_plan_confirm(this);
            wt->set_change(true);
            ui->stackedWidget->addWidget(wt);
            ui->stackedWidget->setCurrentWidget(wt);
            connect(wt->findChild<QPushButton*>("confirm_store"), &QPushButton::clicked, [=](){
                ui->stackedWidget->removeWidget(widget);
                ui->stackedWidget->removeWidget(wt);
                widget->deleteLater();
                wt->deleteLater();
            });
        });

        connect(widget->findChild<QPushButton*>("skip"), &QPushButton::clicked, [=](){
            auto *wt = new change_plan_confirm(this);
            wt->set_change(true);
            ui->stackedWidget->addWidget(wt);
            ui->stackedWidget->setCurrentWidget(wt);
            connect(wt->findChild<QPushButton*>("confirm_store"), &QPushButton::clicked, [=](){
                ui->stackedWidget->removeWidget(widget);
                ui->stackedWidget->removeWidget(wt);
                widget->deleteLater();
                wt->deleteLater();
            });
        });
    }
    else if(pageName == "force_store")
    {
        auto *wt = new change_plan_confirm(this);
        wt->set_change(true);
        ui->stackedWidget->addWidget(wt);
        ui->stackedWidget->setCurrentWidget(wt);
        connect(wt->findChild<QPushButton*>("confirm_store"), &QPushButton::clicked, [=](){
            ui->stackedWidget->removeWidget(wt);
            wt->deleteLater();
        });
    }
    else if(pageName == "set_plan")  //这里是卡片的服药计划按钮按下去后的界面
    {
        auto *widget = new change_plan(this);
        widget->findChild<QPushButton*>("next")->setText("确定");
        widget->findChild<QPushButton*>("skip")->setText("返回");
        ui->stackedWidget->addWidget(widget);
        ui->stackedWidget->setCurrentWidget(widget);

        //确定修改计划
        connect(widget->findChild<QPushButton*>("next"), &QPushButton::clicked, [=](){
            /*
                这里应该添加数据处理的代码。
            */
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
            emit signal_route::instance()->switchToPage("med_list");
        });

        //返回
        connect(widget->findChild<QPushButton*>("skip"), &QPushButton::clicked, [=](){
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
            emit signal_route::instance()->switchToPage("med_list");
        });

    }
    else if(pageName == "special_med_inform")
    {
        auto *widget = new change_plan(this);
        widget->findChild<QPushButton*>("next")->setText("确定");
        widget->findChild<QPushButton*>("skip")->setText("返回");
        widget->findChild<QLabel*>("label")->setText("特殊药品提醒");
        ui->stackedWidget->addWidget(widget);
        ui->stackedWidget->setCurrentWidget(widget);

        //确定修改计划
        connect(widget->findChild<QPushButton*>("next"), &QPushButton::clicked, [=](){
            /*
                这里应该添加数据处理的代码。
            */
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
            emit signal_route::instance()->switchToPage("main_page");
        });

        //返回
        connect(widget->findChild<QPushButton*>("skip"), &QPushButton::clicked, [=](){
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
            emit signal_route::instance()->switchToPage("main_page");
        });
    }
    else if(pageName == "usage_record")
    {
        ui->stackedWidget->setCurrentWidget(record);
    }
    else if(pageName == "usage_plan")
    {
        ui->stackedWidget->setCurrentWidget(useplan);
    }
    else if(pageName == "settings")
    {
        ui->stackedWidget->setCurrentWidget(sets);
    }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);
    qDebug() << size();
}
