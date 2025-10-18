#include "dialog_fetch_med.h"
#include "qdebug.h"
#include "ui_dialog_fetch_med.h"
#include "utils.h"

dialog_fetch_med::dialog_fetch_med(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dialog_fetch_med)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(15);
    shadowEffect->setColor(palette().shadow().color());
    shadowEffect->setOffset(8, 8);
    ui->widget->setGraphicsEffect(shadowEffect);

    setupMenu();

}

void dialog_fetch_med::setupMenu(void)
{
    menu_flag = true;

    menu = new QMenu(this);

    menu->setStyleSheet(
        "QMenu {"
        "    background-color: white;"
        "    border: 1px solid #d0d0d0;"
        "    border-radius: 4px;"
        "    padding: 0px;"
        "}"
        "QMenu::item {"
        "    color: #666666;"
        "    padding: 4px 4px;"
        "    border-bottom: 1px solid #f0f0f0;"
        "    font-size: 14px;"
        "}"
        "QMenu::item:last {"
        "    border-bottom: none;" // 最后一项无边框
        "}"
        "QMenu::item:selected {"
        "    background-color: #f0f8ff;"
        "    color: #0078d7;"
        "}"
        );

    // 添加菜单项
    QAction *action1 = new QAction("取药后正常放入药物", this);
    QAction *action2 = new QAction("取药后没有放入药物", this);
    QAction *action3 = new QAction("取药后放错药物", this);
    QAction *action4 = new QAction("识别错误和无法识别药物", this);

    menu->addAction(action1);
    menu->addAction(action2);
    menu->addAction(action3);
    menu->addAction(action4);

    // 连接信号
    connect(menu, &QMenu::triggered,
            this, &dialog_fetch_med::onMenuActionTriggered);
}

void dialog_fetch_med::onMenuActionTriggered(QAction *action)
{
    QString actionText = action->text();
    qDebug() << "选择了:" << actionText;

    // 根据选择执行相应操作
    if (actionText == "取药后正常放入药物") {
        handleNormalReturn();
    } else if (actionText == "取药后没有放入药物") {
        handleNoReturn();
    } else if (actionText == "取药后放错药物") {
        handleWrongReturn();
    } else if (actionText == "识别错误和无法识别药物") {
        handleRecognitionError();
    }
}

void dialog_fetch_med::handleNormalReturn()
{
    ret = NormalReturn;
    this->close();
}
void dialog_fetch_med::handleNoReturn()
{
    ret = NoReturn;
    this->close();
}
void dialog_fetch_med::handleWrongReturn()
{
    ret = WrongReturn;
    this->close();
}
void dialog_fetch_med::handleRecognitionError()
{
    ret = RecognitionError;
    this->close();
}

dialog_fetch_med::~dialog_fetch_med()
{
    delete ui;
}

void dialog_fetch_med::on_toolButton_2_clicked()
{
    ret = 0;
    this->close();
}

//这里是回收药盒的按钮， 应该要跳出一个菜单,  如果没有menu_flag标志，说明其他模块通过set_content用到了这个类。
void dialog_fetch_med::on_recover_box_clicked()
{
    if(menu_flag == true)
    {
        QPoint menuPos = ui->recover_box->mapToGlobal(QPoint(0, ui->recover_box->height()));
        menu->exec(menuPos);
    }
    else
    {
        this->close();
    }
}

void dialog_fetch_med::set_content(const QString& title, const QString& content, const QString& button, bool ismenu)
{
    ui->title->setText(title);
    ui->content->setText(content);
    ui->recover_box->setText(button);
    menu_flag = ismenu;
}
