#include "store_page.h"
#include "ui_store_page.h"
#include "data_structs.h"
#include "ocrmanager.h"
#include "yolomanager.h"

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
    page3 = new store_page3(this);
    ui->stackedWidget->addWidget(page3);
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
    if(page3->isset() == false) //还没有设置好
    {
        return;
    }
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
