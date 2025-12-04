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

//在显示这个页面之前调用这个函数来调整显示的信息，存药的时候
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
    auto sz = this->parentWidget()->window()->size();

    QSize dialogSize(
        static_cast<int>(sz.width() * 0.75),
        static_cast<int>(sz.height() * 0.65)
        );

    //////////前面要做逻辑判断/////////////////////////////////////
    QSize parentSize = this->parentWidget()->size();
    if(ui->num->text().toInt() < 1 || ui->name->text().isEmpty())
    {
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

    dialog_store_success *dialog = new dialog_store_success(this);
    dialog->setContent(QString("本次存入药品%1,共%2粒").arg(ui->name->text()).arg(ui->num->text().toInt()));
    dialog->resize(dialogSize);
    dialog->exec();
    dialog->deleteLater(); //调用完要删除对话框

    ///////////////保存信息到数据库/////////////////
    data_manager::instance()->store_medcine();


    //////////////可能要控制药盒下降///////////////


    ///////////////切换到主界面/////////////////
    emit signal_route::instance()->switchToPage("main_page");
}

