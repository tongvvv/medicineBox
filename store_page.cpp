#include "store_page.h"
#include "ui_store_page.h"
#include "data_structs.h"
#include "ocrmanager.h"
#include "yolomanager.h"
#include "dialog_common_inform.h"

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

void store_page::change_page2() //第一步点击完成，切换到第二页
{
    int boxno = data_manager::instance()->get_empty_box(); //得到最小空药盒编号
    data_manager::instance()->setData("store_no",boxno); //在全局数据管理器里放入编号，以便其他界面获取
    /*
        这里要开仓，根据空药盒的编号，升起对应的药盒。
    */
    ui->stackedWidget->setCurrentWidget(page2);
    all_label_white();
    label2blue(ui->num2);
}

void store_page::skip_page2() //第一步点击跳过， 切换到第二页
{
    int boxno = data_manager::instance()->get_empty_box(); //得到最小空药盒编号
    data_manager::instance()->setData("store_no",boxno); //在全局数据管理器里放入编号，以便其他界面获取
    /*
        这里要开仓，根据空药盒的编号，升起对应的药盒。
    */
    ui->stackedWidget->setCurrentWidget(page2);
    all_label_white();
    label2blue(ui->num2);
}

//这里是在存药的第二步点击了下一步之后，我们要进入设置服药计划界面，药仓应该关上
void store_page::change_page3()
{
    /*
        这里要关仓
    */
    //这里调用另外两线程的ocr与yolo。 结果通过信号返回到主线程。
    connect(OcrManager::instance(), &OcrManager::recognitionFinished, this, &store_page::handle_OCR);
    connect(YoloManager::instance(), &YoloManager::detectionFinished, this, &store_page::handle_yolo);
    QMetaObject::invokeMethod(OcrManager::instance(), "recognizeText",
                              Qt::QueuedConnection);
    QMetaObject::invokeMethod(YoloManager::instance(), "detectObjects",
                              Qt::QueuedConnection);
    //切换界面
    ui->stackedWidget->setCurrentWidget(page3);
    all_label_white();
    label2blue(ui->num3);
}

//这里是用户在第三步设置完成后，点击了下一步。
void store_page::change_page4()
{
    if(page3->isset() == false) //还没有设置好的话，给个提示框！
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
    //我们在这里等待识别的结果
    //为了简化逻辑，我们每100毫秒轮询一次ocrResult和yoloResult。 如果还没识别出来，那我们弹出等待对话框，阻塞在这里。
    waitforres();

    //这里必须把用户的服药计划，药品名称，药品数量等东西提交到我们的全局数据管理中心，以便后面的界面使用
    data_manager::instance()->setData("store_user", page3->getuser());
    data_manager::instance()->setData("store_freq", page3->getfreq());
    data_manager::instance()->setData("store_starttime", page3->getstarttime());
    data_manager::instance()->setData("store_eattime", page3->geteattime());
    data_manager::instance()->setData("store_nums", page3->getnums());
    //////////////////////////////////////////////////////
    //进行界面切换
    page4->update_name_nums();
    ui->stackedWidget->setCurrentWidget(page4);
    all_label_white();
    label2blue(ui->num4);
}

void store_page::skip_page4() //跳过了设置计划，直接到了第四步
{
    //我们在这里等待识别的结果
    //为了简化逻辑，我们每100毫秒轮询一次ocrResult和yoloResult。 如果还没识别出来，那我们弹出等待对话框，阻塞在这里。
    waitforres();

    //////////////////////////////////////////////////////
    //进行界面切换
    page4->update_name_nums();
    ui->stackedWidget->setCurrentWidget(page4);
    all_label_white();
    label2blue(ui->num4);
}

void store_page::handle_OCR(QString str)
{
    qDebug() << "得到OCR结果" << str;
    data_manager::instance()->setData("store_ocr", str);
    disconnect(OcrManager::instance(), &OcrManager::recognitionFinished, this, &store_page::handle_OCR);
}

void store_page::handle_yolo(int num)
{
    qDebug() << "得到yolo结果" << num;
    data_manager::instance()->setData("store_yolo", num);
    disconnect(YoloManager::instance(), &YoloManager::detectionFinished, this, &store_page::handle_yolo);
}

void store_page::waitforres(void)
{
    //我们在这里等待识别的结果
    //为了简化逻辑，我们每100毫秒轮询一次ocrResult和yoloResult。 如果还没识别出来，那我们弹出等待对话框，阻塞在这里。
    QVariant ocrResult = data_manager::instance()->getData("store_ocr");
    QVariant yoloResult = data_manager::instance()->getData("store_yolo");
    if(ocrResult.isNull() || yoloResult.isNull())  //只要有结果没出来
    {
        qDebug() << "识别结果还没有出来！";
        QSize dialogSize;
        dialogSize.setWidth(static_cast<int>(width() * 0.75));
        dialogSize.setHeight(static_cast<int>(height() * 0.6));
        dialog_common_inform *dialog = new dialog_common_inform(this);
        dialog->resize(dialogSize);
        dialog->setState(false);
        dialog->setContent("正在识别药品信息，请稍候...");

        QTimer *checkTimer = new QTimer(dialog);
        connect(checkTimer, &QTimer::timeout, dialog, [dialog, checkTimer](){
            QVariant ocr = data_manager::instance()->getData("store_ocr");
            QVariant yolo = data_manager::instance()->getData("store_yolo");
            if(!ocr.isNull() && !yolo.isNull()) //必须全都有结果
            {
                checkTimer->stop();
                dialog->close();
            }
        });
        checkTimer->start(100); // 每100ms检查一次
        dialog->exec();
        dialog->deleteLater();
        checkTimer->deleteLater();
    }
}

