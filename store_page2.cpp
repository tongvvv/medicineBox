#include "store_page2.h"
#include "ui_store_page2.h"
#include "scaled_pixmap_label.h"

store_page2::store_page2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page2)
{
    ui->setupUi(this);

    QImage image(":/images/store_page2.png");
    ui->label_2->setPixmap(QPixmap::fromImage(image));
}

store_page2::~store_page2()
{
    delete ui;
}


