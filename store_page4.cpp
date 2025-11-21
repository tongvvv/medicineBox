#include "store_page4.h"
#include "qdebug.h"
#include "ui_store_page4.h"

store_page4::store_page4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::store_page4)
    , m_change(false)
{
    ui->setupUi(this);
}

store_page4::~store_page4()
{
    delete ui;
}

void store_page4::setChange(bool change)
{
    m_change = change;
}

void store_page4::on_confirm_store_clicked()
{
    QSize parentSize = this->parentWidget()->size();

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
    emit signal_route::instance()->switchToPage("main_page");
}
