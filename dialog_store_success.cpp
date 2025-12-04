#include "dialog_store_success.h"
#include "ui_dialog_store_success.h"

dialog_store_success::dialog_store_success(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_store_success)
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

void dialog_store_success::setContent(const QString& str)
{
    ui->content->setText(str);
}

dialog_store_success::~dialog_store_success()
{
    delete ui;
}

void dialog_store_success::on_pushButton_clicked()
{
    this->close();
}


void dialog_store_success::on_toolButton_2_clicked()
{
    this->close();
}

