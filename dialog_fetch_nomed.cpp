#include "dialog_fetch_nomed.h"
#include "ui_dialog_fetch_nomed.h"
#include <QGraphicsDropShadowEffect>

dialog_fetch_nomed::dialog_fetch_nomed(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_fetch_nomed)
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

dialog_fetch_nomed::~dialog_fetch_nomed()
{
    delete ui;
}

void dialog_fetch_nomed::on_close_clicked()
{
    this->close();
}


void dialog_fetch_nomed::on_confirm_clicked()
{
    this->close();
}


void dialog_fetch_nomed::on_again_clicked()
{
    this->accept();
}

