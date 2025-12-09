#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "change_plan.h"
#include "change_plan_confirm.h"
#include "data_structs.h"
#include "dialog_common_inform.h"
#include "medreminder.h"
#include "QMessageBox"
#include "utils.h"
#include "dialog_common_inform.h"

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

    MedReminderManager* reminderMgr = MedReminderManager::instance();

    connect(
        reminderMgr, &MedReminderManager::reminderTriggered,
        this, &MainWindow::onMedReminderTriggered);

    reminderMgr->startReminderService();

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
        medlist->getAllinfo();
    }
    else if(pageName == "main_page")
    {
        ui->stackedWidget->setCurrentWidget(mainpage);
    }
    else if(pageName == "medcine_information1")
    {
        medinfo->setMedicationInfoFromDataManager();
        ui->stackedWidget->setCurrentWidget(medinfo);
    }
    else if(pageName == "med_list_nofetch")
    {
        medlist->card_is_fetch(false);
        ui->stackedWidget->setCurrentWidget(medlist);
        medlist->getAllinfo();
    }
    else if(pageName == "store_page")
    {
        if(data_manager::instance()->get_empty_box() < 0)
        {
            dialog_common_inform dialog(this);
            QString reminderContent = QString("药箱已满，请取出后再存");
            dialog.setContent(reminderContent);
            dialog.resize(this->size().width()*0.75, this->size().height()*0.65);
            dialog.exec(); // 阻塞式显示，关闭后自动析构
            return;
        }
        ui->stackedWidget->setCurrentWidget(StorePage);
        StorePage->change_page1();
    }
    else if(pageName == "change_plan") //放错药物时的修改用药计划界面， 这个页面每次都新建, 但是得记得释放内存
    {
        auto *widget = new change_plan(this);
        ui->stackedWidget->addWidget(widget);
        ui->stackedWidget->setCurrentWidget(widget);

        //这里是设置里面的store_page3子页面点击了下一步按钮之后的回调函数。
        connect(widget->findChild<QPushButton*>("next"), &QPushButton::clicked, [=](){
            if(widget->getpage()->isset() == false) //还没有设置好的话，给个提示框！ 然后直接返回。
            {
                QSize dialogSize;
                dialogSize.setWidth(static_cast<int>(width() * 0.75));
                dialogSize.setHeight(static_cast<int>(height() * 0.6));
                dialog_common_inform *dialog = new dialog_common_inform(this);
                dialog->resize(dialogSize);
                dialog->setContent("服用人不能为空，服用时间不能为空且不能重复");
                dialog->exec();
                dialog->deleteLater(); //调用完要删除对话框
                return;
            }
            ////////////////////////////////////////////////////////////
            //到了这一步我们已经确定服用计划都设置过了，没有空的或者错误的数据了。
            ///////////////////////////////////////////////////////////

            //这里必须把用户的服药计划，药品名称，药品数量等东西提交到我们的全局数据管理中心，以便后面的界面使用
            data_manager::instance()->setData("store_user", widget->getpage()->getuser());
            data_manager::instance()->setData("store_freq", widget->getpage()->getfreq());
            data_manager::instance()->setData("store_starttime", widget->getpage()->getstarttime());
            data_manager::instance()->setData("store_eattime", widget->getpage()->geteattime());
            data_manager::instance()->setData("store_nums", widget->getpage()->getnums());

            auto *wt = new change_plan_confirm(this);
            wt->getpage4()->update_name_nums();
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
            wt->getpage4()->update_name_nums();
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
        //放错药物时的选择了不修改用药计划， 这里会抛弃原本的用药计划，因为要不同，计划肯定不同，沿用之前的计划可能会造成安全问题
        auto *wt = new change_plan_confirm(this);
        wt->getpage4()->update_name_nums();
        ui->stackedWidget->addWidget(wt);
        ui->stackedWidget->setCurrentWidget(wt);
        connect(wt->findChild<QPushButton*>("confirm_store"), &QPushButton::clicked, [=](){
            ui->stackedWidget->removeWidget(wt);
            wt->deleteLater();
        });
    }
    else if(pageName == "set_plan")  //这里是卡片的修改服药计划按钮按下去后的界面
    {
        auto *widget = new change_plan(this);
        widget->findChild<QPushButton*>("next")->setText("确定");
        widget->findChild<QPushButton*>("skip")->setText("返回");
        ui->stackedWidget->addWidget(widget);
        ui->stackedWidget->setCurrentWidget(widget);

        //确定修改计划
        connect(widget->findChild<QPushButton*>("next"), &QPushButton::clicked, [=](){
            if(widget->getpage()->isset() == false) //还没有设置好的话，给个提示框！ 然后直接返回。
            {
                qDebug()<<"set_plan点击了确定";
                QSize dialogSize;
                dialogSize.setWidth(static_cast<int>(width() * 0.75));
                dialogSize.setHeight(static_cast<int>(height() * 0.6));
                dialog_common_inform *dialog = new dialog_common_inform(this);
                dialog->resize(dialogSize);
                dialog->setContent("服用人不能为空，服用时间不能为空且不能重复");
                dialog->exec();
                dialog->deleteLater(); //调用完要删除对话框
                return;
            }
            ////////////////////////////////////////////////////////////
            //到了这一步我们已经确定服用计划都设置过了，没有空的或者错误的数据了。
            ///////////////////////////////////////////////////////////

            //这里必须把用户的服药计划，药品名称，药品数量等东西提交到我们的全局数据管理中心
            data_manager::instance()->setData("setplan_user", widget->getpage()->getuser());
            data_manager::instance()->setData("setplan_freq", widget->getpage()->getfreq());
            data_manager::instance()->setData("setplan_starttime", widget->getpage()->getstarttime());
            data_manager::instance()->setData("setplan_eattime", widget->getpage()->geteattime());
            data_manager::instance()->setData("setplan_nums", widget->getpage()->getnums());
            data_manager::instance()->setplan();
            ui->stackedWidget->removeWidget(widget);
            widget->deleteLater();
            emit signal_route::instance()->switchToPage("med_list");
        });

        //返回
        connect(widget->findChild<QPushButton*>("skip"), &QPushButton::clicked, [=](){
            data_manager::instance()->removeData("setplan_no");
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
        record->update_data();
        ui->stackedWidget->setCurrentWidget(record);
    }
    else if(pageName == "usage_plan")
    {
        useplan->update_date();
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

void MainWindow::onMedReminderTriggered(const MedReminderTask &task)
{
    dialog_common_inform dialog(this);
    QString reminderContent = QString("患者%1请服用%2，%3粒。药盒编号%4")
                                  .arg(task.p_name)
                                  .arg(task.m_name)
                                  .arg(task.eatcount)
                                  .arg(task.no);
    dialog.setContent(reminderContent);
    dialog.resize(this->size().width()*0.75, this->size().height()*0.65);
    dialog.exec(); // 阻塞式显示，关闭后自动析构
}
