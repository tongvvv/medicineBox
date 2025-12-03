#include "fetch_card.h"
#include "qdebug.h"
#include "ui_fetch_card.h"
#include "utils.h"
#include "dialog_fetch_nomed.h"
#include "dialog_fetch_wrong_med.h"

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
}

void fetch_card::on_med_info_clicked()
{
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
    QSize parentSize = this->parentWidget()->size();

    qDebug() << parentSize.width();
    qDebug() << parentSize.height();

    QSize dialogSize(
        static_cast<int>(parentSize.width() * widthRatio),
        static_cast<int>(parentSize.height() * heightRatio)
        );

    DialogType *dialog = new DialogType(this);
    dialog->resize(dialogSize);
    return dialog;
}

//工具函数
template <typename DialogType>
void fetch_card::handle_menu(DialogType *dialog)
{
    dialog->exec();

    switch(dialog->get_ret())
    {
        //正常放入药盒
    case NormalReturn:
        handleNormalReturn();
        break;
    case NoReturn:
        handleNoReturn();
        break;
    case WrongReturn:
        handleWrongReturn();
        break;
    case RecognitionError:
        handleRecognitionError();
        break;
    default:
        qDebug() << dialog->get_ret();
        break;
    }
}

//取药按钮
void fetch_card::on_card_get_med_clicked()
{
    auto *dialog = createDialog<dialog_fetch_med>();

    handle_menu(dialog);

    dialog->deleteLater(); //调用完要删除对话框
}

void fetch_card::handleNormalReturn()
{
    auto *dialog = createDialog<dialog_fetch_med>();
    dialog->set_content("药物回收","本次放回药物XXXX药品XXXX粒!","确定",false);
    dialog->exec();
    dialog->deleteLater();
}

void fetch_card::handleNoReturn()
{
    auto *dialog = createDialog<dialog_fetch_nomed>();
    int ret = dialog->exec();

    //点了确定，或者叉掉了对话框，就是Rejected
    if(ret == QDialog::Rejected) {}

    //说明需要重新放入， 用Accepted代表。
    //如果有更多的逻辑，需要像上面的handle_menu函数一样来处理，这里偷了点懒
    if(ret == QDialog::Accepted)
    {
        //这里有函数嵌套，得注意一下。主要是业务逻辑这么要求了，我也没办法。
        //得注意要删除对话框。
        auto *dialog_menu = createDialog<dialog_fetch_med>();
        dialog_menu->set_content("药物回收","请放入药物YYYYY ！","回收药盒",true);
        handle_menu(dialog_menu);
        dialog_menu->deleteLater();
    }

    dialog->deleteLater();
}

void fetch_card::handleWrongReturn()
{
    auto *dialog = createDialog<dialog_fetch_wrong_med>();
    int ret = dialog->exec();
    //说明点了弹出药盒，重新放
    if(ret == QDialog::Rejected)
    {
        auto *dialog_menu = createDialog<dialog_fetch_med>();
        dialog_menu->set_content("药物回收","请取出药物XXXX，放入药物YYYYY","回收药盒",true);
        handle_menu(dialog_menu);
        dialog_menu->deleteLater(); //调用完要删除对话框
    }
    //点了继续存入
    if(ret == QDialog::Accepted)
    {
        //处理代码在对话框内部，这里不用管
    }

    dialog->deleteLater();
}

void fetch_card::handleRecognitionError()
{
    auto *dialog = createDialog<dialog_fetch_wrong_med>();
    dialog->set_content("提醒！","本次放回药物名无法识别！");
    int ret = dialog->exec();
    //说明点了弹出药盒，重新放
    if(ret == QDialog::Rejected)
    {
        auto *dialog_menu = createDialog<dialog_fetch_med>();
        dialog_menu->set_content("取药提醒","请取出无法识别的药物，放入药物YYYYY","回收药盒",true);
        handle_menu(dialog_menu);
        dialog_menu->deleteLater(); //调用完要删除对话框
    }
    //点了继续存入
    if(ret == QDialog::Accepted)
    {
        //处理代码在对话框内部，这里不用管
    }

    dialog->deleteLater();
}

void fetch_card::on_card_plan_clicked()
{
    emit signal_route::instance()->switchToPage("set_plan");
}

