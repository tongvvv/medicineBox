#include "dialog_common_inform.h"
#include "qgraphicseffect.h"
#include "ui_dialog_common_inform.h"

dialog_common_inform::dialog_common_inform(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_common_inform)
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

dialog_common_inform::~dialog_common_inform()
{
    delete ui;
}

void dialog_common_inform::setContent(const QString &str)
{
    ui->content->setText(str);
}

void dialog_common_inform::on_confirm_clicked()
{
    this->close();
}

void dialog_common_inform::setState(bool state)
{
    ui->confirm->setEnabled(state);
}
