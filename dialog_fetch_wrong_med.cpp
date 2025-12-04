#include "dialog_fetch_wrong_med.h"
#include "ui_dialog_fetch_wrong_med.h"
#include <QGraphicsDropShadowEffect>
#include "dialog_fetch_force_store.h"

dialog_fetch_wrong_med::dialog_fetch_wrong_med(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_fetch_wrong_med)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(15);
    shadowEffect->setColor(palette().shadow().color());
    shadowEffect->setOffset(8, 8);
    ui->widget->setGraphicsEffect(shadowEffect);

    ui->close->setEnabled(false);
}

dialog_fetch_wrong_med::~dialog_fetch_wrong_med()
{
    delete ui;
}

//弹出药盒，重新放，外部接收到QDialog::Rejected
void dialog_fetch_wrong_med::on_again_clicked()
{
    this->close();
}

//点了继续存入
void dialog_fetch_wrong_med::on_force_store_clicked()
{
    auto sz = this->parentWidget()->window()->size();

    QSize dialogSize(
        static_cast<int>(sz.width() * 0.75),
        static_cast<int>(sz.height() * 0.65)
        );

    auto *dialog = new dialog_fetch_force_store(this->parentWidget());
    dialog->resize(dialogSize);

    int ret = dialog->exec();
    if(ret == QDialog::Accepted)
    {
        this->accept();
    }

    dialog->deleteLater(); //调用完要删除对话框
}

void dialog_fetch_wrong_med::set_content(const QString& title, const QString& content)
{
    ui->title->setText(title);
    ui->content->setText(content);
}

