#include "dialog_fetch_force_store.h"
#include "ui_dialog_fetch_force_store.h"
#include <QGraphicsDropShadowEffect>
#include "signal_route.h"
#include "data_structs.h"

dialog_fetch_force_store::dialog_fetch_force_store(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_fetch_force_store)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(15);
    shadowEffect->setColor(palette().shadow().color());
    shadowEffect->setOffset(8, 8);
    ui->widget->setGraphicsEffect(shadowEffect);

}

dialog_fetch_force_store::~dialog_fetch_force_store()
{
    delete ui;
}

//修改用药计划
void dialog_fetch_force_store::on_change_plan_clicked()
{
    emit signal_route::instance()->switchToPage("change_plan");
    this->accept();
}

//不修改，直接存入
void dialog_fetch_force_store::on_force_store_clicked()
{
    QString ocrResult = data_manager::instance()->getData("fetch_ocr").toString();
    int yoloResult = data_manager::instance()->getData("fetch_yolo").toInt();
    data_manager::instance()->removeData("fetch_ocr");   //不删也行，随便。
    data_manager::instance()->removeData("fetch_yolo");
    data_manager::instance()->setData("store_ocr", ocrResult);
    data_manager::instance()->setData("store_yolo", yoloResult);

    emit signal_route::instance()->switchToPage("force_store");
    this->accept();
}

void dialog_fetch_force_store::on_close_clicked()
{
    this->close();
}

