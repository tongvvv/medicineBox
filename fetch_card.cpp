#include "fetch_card.h"
#include "qdebug.h"
#include "ui_fetch_card.h"
#include "utils.h"
#include "dialog_fetch_nomed.h"
#include "dialog_fetch_wrong_med.h"
#include "ocrmanager.h"
#include "yolomanager.h"
#include "data_structs.h"
#include "dialog_common_inform.h"
#include "signal_route.h"

fetch_card::fetch_card(QWidget *parent, unsigned short num)
    : QWidget(parent)
    , ui(new Ui::fetch_card)
    , m_state(true)
    , m_num(num)
{
    ui->setupUi(this);
    auto label = ui->widget->findChild<QLabel*>("number");
    label->setText(QString::number(m_num));

    /*
        ！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
        这行代码启用样式表， 否则样式表是无法产生效果的。
        因为我们这个类仅仅继承了QWidget，而QWidget并没有在实现中定义这个属性。
    */
    this->setAttribute(Qt::WA_StyledBackground, true);
}

fetch_card::~fetch_card()
{
    delete ui;
}

void fetch_card::set_num(unsigned short num)
{
    m_num = num;

    auto label = ui->widget->findChild<QLabel*>("number");
    label->setText(QString::number(m_num));
}

unsigned short fetch_card::get_num() const
{
    return m_num;
}

void fetch_card::set_detailedinfo(med_detailed_info* info)
{
    m_detailedinfo = *info;
    m_num = m_detailedinfo.no;
    ui->name->setText(m_detailedinfo.m_name);
    ui->num->setText(QString::number(m_detailedinfo.number));
    ui->number->setText(QString::number(m_detailedinfo.no));
    ui->med_switch->setSwitch(m_detailedinfo.inform);

    connect(ui->med_switch, &SwitchButton::sigSwitchChanged, [this](bool onoff){
        m_detailedinfo.inform = onoff==true?1:0;
        data_manager::instance()->update_medicine(m_detailedinfo);
    });
}

void fetch_card::on_med_info_clicked()
{
    // 将当前卡片的药品信息发送到全局数据中心
    data_manager::instance()->setData("med_info_no", m_detailedinfo.no);
    data_manager::instance()->setData("med_info_name", m_detailedinfo.m_name);
    data_manager::instance()->setData("med_info_info", m_detailedinfo.m_info);
    data_manager::instance()->setData("med_info_number", m_detailedinfo.number);
    data_manager::instance()->setData("med_info_picpath", m_detailedinfo.m_picpath);
    data_manager::instance()->setData("med_info_patient", m_detailedinfo.p_name);
    data_manager::instance()->setData("med_info_eatfreq", m_detailedinfo.eatfreq);
    data_manager::instance()->setData("med_info_starttime", m_detailedinfo.starttime);

    // 将服药时间和数量转换为字符串格式存储
    data_manager::instance()->setData("med_info_eattimes", m_detailedinfo.eattimesToDbString());
    data_manager::instance()->setData("med_info_eatcounts", m_detailedinfo.eatcountsToDbString());

    qDebug() << "药品信息已发送到全局数据中心:";
    qDebug() << "药品名称:" << m_detailedinfo.m_name;
    qDebug() << "使用人:" << m_detailedinfo.p_name;
    qDebug() << "数量:" << m_detailedinfo.number;
    emit signal_route::instance()->switchToPage("medcine_information1");
}

void fetch_card::card_is_fetch(bool state)
{
    if(m_state == state)
    {
        return ;
    }

    m_state = state;

    if(state == true)
    {
        ui->verticalLayout->addWidget(ui->widget_3);
        ui->widget_3->show();
        // 设置拉伸比例为 1:1:1:1
        for (int i = 0; i < 4; ++i) {
            ui->verticalLayout->setStretch(i, 1);
        }
    }
    else
    {
        ui->verticalLayout->removeWidget(ui->widget_3);
        ui->widget_3->hide();
        // 设置拉伸比例为 2:3:3
        // 注意：现在只有3个widget了
        ui->verticalLayout->setStretch(0, 2);
        ui->verticalLayout->setStretch(1, 3);
        ui->verticalLayout->setStretch(2, 3);
    }
}

//不同类型对话框的创建函数，模板参数是对话框的类型。  为了简化代码。
template <typename DialogType>
DialogType* fetch_card::createDialog(double widthRatio, double heightRatio)
{
    QWidget* Window = this->window();

    QSize Size = Window->size();

    QSize dialogSize(
        static_cast<int>(Size.width() * widthRatio),
        static_cast<int>(Size.height() * heightRatio)
        );

    DialogType *dialog = new DialogType(this);
    dialog->resize(dialogSize);
    return dialog;
}

//这里是点击了取药按钮之后的处理函数
void fetch_card::handle_menu(QDialog *dialog)
{
    dialog->exec(); //对话框弹出来

    ///////////当用户点击回收药盒之后，进入到这里///////////////
    /////////这里应该是要关闭仓门吧///////////////////////////

    //这里调用另外两线程的ocr与yolo。 结果通过信号返回到主线程。
    data_manager::instance()->removeData("fetch_ocr");   //保险起见，删除上一次的结果
    data_manager::instance()->removeData("fetch_yolo");
    connect(OcrManager::instance(), &OcrManager::recognitionFinished, this, &fetch_card::handle_OCR);
    connect(YoloManager::instance(), &YoloManager::detectionFinished, this, &fetch_card::handle_yolo);
    QMetaObject::invokeMethod(OcrManager::instance(), "recognizeText",
                              Qt::QueuedConnection);
    QMetaObject::invokeMethod(YoloManager::instance(), "detectObjects",
                              Qt::QueuedConnection);


    waitforres(); //我们必须等待识别的结果！！！ 结果获取方式如下面所示
    QString ocrResult = data_manager::instance()->getData("fetch_ocr").toString();
    int yoloResult = data_manager::instance()->getData("fetch_yolo").toInt();

    /////////ocrResult可能有很多信息，这里我是没有做数据比对的///////////////////
    if(yoloResult > 0 && yoloResult < m_detailedinfo.number && ocrResult==m_detailedinfo.m_name)
    {
        //正常吃了。这里只要数量减少了，我就认为用户正常吃了。
        //如果要监控具体吃了几粒，符不符合计划，实现起来太麻烦了。
        m_detailedinfo.number = yoloResult;
        m_detailedinfo.lasteat = QDateTime::currentDateTime();
        handleNormalReturn();
    }
    else if(yoloResult == m_detailedinfo.number && ocrResult==m_detailedinfo.m_name)
    {
        //没吃但是放了回来
        handleNotEat();
    }
    else if(yoloResult > m_detailedinfo.number && ocrResult==m_detailedinfo.m_name)
    {
        //如果还是原来的药，但是数量变多了，那么我认为他正常吃了，放了新的药进来。
        //这里其实和正常吃药处理一样， 只不过咱们的数量变多了而已，最后一次吃的时间变了
        m_detailedinfo.number = yoloResult;
        m_detailedinfo.lasteat = QDateTime::currentDateTime();
        handleNormalReturn();
    }
    else if(yoloResult == 0)
    {
        //没有放入药品
        handleNoReturn();
    }
    else if(ocrResult != m_detailedinfo.m_name)
    {
        //放错药物 药名不一致
        handleWrongReturn();
    }
}

/////////////////////点击了取药按钮////////////////////////////
void fetch_card::on_card_get_med_clicked()
{
    /*
        这里应该要开仓，升起来药盒，应该有串口操作。
        关于这个卡片所代表的所有信息，均在 m_detailedinfo成员里可找到。
    */
    auto *dialog = createDialog<dialog_fetch_med>();
    QString str = QString("您取出的是【%1】号药盒【%2】").arg(m_detailedinfo.no).arg(m_detailedinfo.m_name);
    dialog->set_content("取药提醒", str, "回收药盒", false);
    handle_menu(dialog);  //这里显示对话框
    dialog->deleteLater(); //调用完要删除对话框
}

//正常吃了的处理函数
void fetch_card::handleNormalReturn()
{
    auto *dialog = createDialog<dialog_fetch_med>();
    QString str = QString("本次放回药物%1药品%2粒").arg(m_detailedinfo.m_name).arg(m_detailedinfo.number);
    dialog->set_content("药物回收",str ,"确定",false);
    dialog->exec();
    dialog->deleteLater();

    //删掉上次的识别结果
    data_manager::instance()->removeData("fetch_ocr");
    data_manager::instance()->removeData("fetch_yolo");
    //更新数据
    data_manager::instance()->update_medicine(m_detailedinfo);
    emit signal_route::instance()->switchToPage("med_list");
    //应该还需要串口控制药盒下降吧/////
}

//没吃但是放了回来
void fetch_card::handleNotEat()
{
    auto *dialog = createDialog<dialog_fetch_med>();
    QString str = QString("本次您没有吃药").arg(m_detailedinfo.m_name).arg(m_detailedinfo.number);
    dialog->set_content("药物回收",str ,"确定",false);
    dialog->exec();
    dialog->deleteLater();

    //删掉上次的识别结果
    data_manager::instance()->removeData("fetch_ocr");
    data_manager::instance()->removeData("fetch_yolo");
    //更新数据
    data_manager::instance()->update_medicine(m_detailedinfo);
    emit signal_route::instance()->switchToPage("med_list");
    //应该还需要串口控制药盒下降吧/////
}

void fetch_card::handleNoReturn()
{
    auto *dialog = createDialog<dialog_fetch_nomed>();
    int ret = dialog->exec();

    //点了确定，或者叉掉了对话框，就是Rejected
    if(ret == QDialog::Rejected)
    {
        //到这里就说明用户没有放药而且点了确认
        //那这个药仓的数据就清空了呗
        data_manager::instance()->delete_medicine(m_detailedinfo);
        emit signal_route::instance()->switchToPage("med_list");
        //应该还需要串口控制药盒下降吧/////
    }

    //说明用户点了重新放入， 用Accepted代表。
    //如果有更多的逻辑，需要像上面的handle_menu函数一样来处理，这里偷了点懒
    if(ret == QDialog::Accepted)
    {
        //这里有函数嵌套，得注意一下。主要是业务逻辑这么要求了，我也没办法。
        //得注意要删除对话框。
        ///////////////这里应该是要重新打开仓门/////////////////
        auto *dialog = createDialog<dialog_fetch_med>();
        QString str = QString("您取出的是【%1】号药盒【%2】").arg(m_detailedinfo.no).arg(m_detailedinfo.m_name);
        dialog->set_content("取药提醒", str, "回收药盒", false);
        handle_menu(dialog);  //这里显示对话框

        dialog->deleteLater();
    }

    dialog->deleteLater();
}

void fetch_card::handleWrongReturn()
{
    auto *dialog = createDialog<dialog_fetch_wrong_med>();
    dialog->set_content("提醒！",QString("本次取出%1,放回%2,请放回正确药品")
                                      .arg(m_detailedinfo.m_name)
                                      .arg(data_manager::instance()->getData("fetch_ocr").toString()));
    int ret = dialog->exec();
    //说明点了弹出药盒，重新放
    if(ret == QDialog::Rejected)
    {
        ///////////////这里应该是要重新打开仓门/////////////////
        auto *dialog = createDialog<dialog_fetch_med>();
        QString str = QString("您取出的是【%1】号药盒【%2】").arg(m_detailedinfo.no).arg(m_detailedinfo.m_name);
        dialog->set_content("取药提醒", str, "回收药盒", false);
        handle_menu(dialog);  //这里显示对话框

        dialog->deleteLater();
    }
    //点了继续存入
    if(ret == QDialog::Accepted)
    {
        //处理代码在对话框内部
        data_manager::instance()->setData("store_no", m_detailedinfo.no);

        QString ocrResult = data_manager::instance()->getData("fetch_ocr").toString();
        int yoloResult = data_manager::instance()->getData("fetch_yolo").toInt();

        data_manager::instance()->setData("store_ocr", ocrResult);
        data_manager::instance()->setData("store_yolo", yoloResult);
    }

    dialog->deleteLater();
}

void fetch_card::on_card_plan_clicked()
{
    data_manager::instance()->setData("setplan_no", m_detailedinfo.no);

    emit signal_route::instance()->switchToPage("set_plan");
}

void fetch_card::handle_OCR(QString str)
{
    qDebug() << "得到OCR结果" << str;
    data_manager::instance()->setData("fetch_ocr", str);
    disconnect(OcrManager::instance(), &OcrManager::recognitionFinished, this, &fetch_card::handle_OCR);
}

void fetch_card::handle_yolo(int num)
{
    qDebug() << "得到yolo结果" << num;
    data_manager::instance()->setData("fetch_yolo", num);
    disconnect(YoloManager::instance(), &YoloManager::detectionFinished, this, &fetch_card::handle_yolo);
}

void fetch_card::waitforres(void)
{
    //我们在这里等待识别的结果
    //为了简化逻辑，我们每100毫秒轮询一次ocrResult和yoloResult。 如果还没识别出来，那我们弹出等待对话框，阻塞在这里。
    QVariant ocrResult = data_manager::instance()->getData("fetch_ocr");
    QVariant yoloResult = data_manager::instance()->getData("fetch_yolo");
    if(ocrResult.isNull() || yoloResult.isNull())  //只要有结果没出来
    {
        qDebug() << "识别结果还没有出来！";
        dialog_common_inform *dialog = createDialog<dialog_common_inform>();
        dialog->setState(false);
        dialog->setContent("正在识别药品信息，请稍候...");

        QTimer *checkTimer = new QTimer(dialog);
        connect(checkTimer, &QTimer::timeout, dialog, [dialog, checkTimer](){
            QVariant ocr = data_manager::instance()->getData("fetch_ocr");
            QVariant yolo = data_manager::instance()->getData("fetch_yolo");
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
