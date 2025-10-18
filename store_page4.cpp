#include "store_page4.h"
#include "qdebug.h"
#include "ui_store_page4.h"

store_page4::store_page4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page4)
{
    ui->setupUi(this);
}

store_page4::~store_page4()
{
    delete ui;
}

void store_page4::on_confirm_store_clicked()
{
    QSize parentSize = this->parentWidget()->size();

    qDebug() << parentSize.width();
    qDebug() << parentSize.height();

    QSize dialogSize(
        static_cast<int>(parentSize.width() * 0.7),
        static_cast<int>(parentSize.height() * 0.85)
        );

    dialog_store_success *dialog = new dialog_store_success(this);
    dialog->resize(dialogSize);
    dialog->exec();
    dialog->deleteLater(); //调用完要删除对话框
    emit signal_route::instance()->switchToPage("med_list");
}
