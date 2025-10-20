#include "medcine_information.h"
#include "ui_medcine_information.h"

medcine_information::medcine_information(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::medcine_information)
{
    ui->setupUi(this);
    QImage image(":/images/med_pic.png");
    ui->label_pic->setPixmap(QPixmap::fromImage(image));
}

medcine_information::~medcine_information()
{
    delete ui;
}

void medcine_information::on_pushButton_clicked()
{
    emit signal_route::instance()->switchToPage("med_list");
}

