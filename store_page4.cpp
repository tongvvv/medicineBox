#include "store_page4.h"
#include "qdebug.h"
#include "qvalidator.h"
#include "ui_store_page4.h"
#include "data_structs.h"
#include "utils.h"
#include "dialog_common_inform.h"

store_page4::store_page4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page4)
    , m_change(false)
{
    ui->setupUi(this);

    ui->num->setAttribute(Qt::WA_InputMethodEnabled, false);  // 设置禁止中文输入
    QRegExp rx("[0-9]{1,2}"); // 正则表达式：数字, 2位
    QRegExpValidator *validator = new QRegExpValidator(rx, this);
    ui->num->setValidator(validator);
}

store_page4::~store_page4()
{
    delete ui;
}

void store_page4::setChange(bool change)
{
    m_change = change;
}

//在显示这个页面之前调用这个函数来调整显示的信息
void store_page4::update_name_nums()
{
    int no = data_manager::instance()->getData("store_no").toInt();
    QString name = data_manager::instance()->getData("store_ocr").toString();
    int num = data_manager::instance()->getData("store_yolo").toInt();

    name = ocr_name_match(name);

    ui->name->setText(name);
    ui->num->setText(QString::number(num));

    ui->label->setText(QString("您已在【%1】号药盒存入【%2】%3粒，感谢您使用智能药盒系统，记得按时吃药哦~")
                           .arg(no).arg(name).arg(num));
}

//这是点击了确认
void store_page4::on_confirm_store_clicked()
{
    //////////前面要做逻辑判断/////////////////////////////////////
    QSize parentSize = this->parentWidget()->size();
    if(ui->num->text().toInt() < 1 || ui->name->text().isEmpty())
    {

        QSize dialogSize;
        if(m_change == false) //不同场景下对话框大小会不一样
        {
            dialogSize.setWidth(static_cast<int>(parentSize.width() * 0.7));
            dialogSize.setHeight(static_cast<int>(parentSize.height() * 0.85));
        }
        else
        {
            dialogSize.setWidth(static_cast<int>(parentSize.width() * 0.75));
            dialogSize.setHeight(static_cast<int>(parentSize.height() * 0.6));
        }
        dialog_common_inform *dialog = new dialog_common_inform(this);
        dialog->resize(dialogSize);
        dialog->setContent("药名不能为空，药品数量要大于1");
        dialog->exec();
        dialog->deleteLater(); //调用完要删除对话框
        return;
    }

    data_manager::instance()->setData("store_medname",ui->name->text());
    data_manager::instance()->setData("store_mednum", ui->num->text().toInt());
    //////////这里是成功了////////////////////////////////////////
    qDebug() << parentSize.width();
    qDebug() << parentSize.height();
    QSize dialogSize;
    if(m_change == false)
    {
        dialogSize.setWidth(static_cast<int>(parentSize.width() * 0.7));
        dialogSize.setHeight(static_cast<int>(parentSize.height() * 0.85));
    }
    else
    {
        dialogSize.setWidth(static_cast<int>(parentSize.width() * 0.75));
        dialogSize.setHeight(static_cast<int>(parentSize.height() * 0.6));
    }

    dialog_store_success *dialog = new dialog_store_success(this);
    dialog->resize(dialogSize);
    dialog->exec();
    dialog->deleteLater(); //调用完要删除对话框

    ///////////////保存信息到数据库/////////////////
    data_manager::instance()->store_medcine();


    //////////////可能要控制药盒下降///////////////


    ///////////////切换到主界面/////////////////
    emit signal_route::instance()->switchToPage("main_page");
}
