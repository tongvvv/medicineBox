#include "fetch_card.h"
#include "ui_fetch_card.h"

fetch_card::fetch_card(QWidget *parent, unsigned short num)
    : QWidget(parent)
    , ui(new Ui::fetch_card)
    , m_state(true)
    , m_num(num)
{
    ui->setupUi(this);
    auto label = ui->widget->findChild<QLabel*>("number");
    label->setText(QString::number(m_num));

    /*
        ！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
        这行代码启用样式表， 否则样式表是无法产生效果的。
        因为我们这个类仅仅继承了QWidget，而QWidget并没有在实现中定义这个属性。
    */
    this->setAttribute(Qt::WA_StyledBackground, true);
}

fetch_card::~fetch_card()
{
    delete ui;
}

void fetch_card::set_num(unsigned short num)
{
    m_num = num;

    auto label = ui->widget->findChild<QLabel*>("number");
    label->setText(QString::number(m_num));
}

unsigned short fetch_card::get_num() const
{
    return m_num;
}

void fetch_card::on_med_info_clicked()
{
    emit signal_route::instance()->switchToPage("medcine_information1");
}

void fetch_card::card_is_fetch(bool state)
{
    if(m_state == state)
    {
        return ;
    }

    m_state = state;

    if(state == true)
    {
        ui->verticalLayout->addWidget(ui->widget_3);
        ui->widget_3->show();
        // 设置拉伸比例为 1:1:1:1
        for (int i = 0; i < 4; ++i) {
            ui->verticalLayout->setStretch(i, 1);
        }
    }
    else
    {
        ui->verticalLayout->removeWidget(ui->widget_3);
        ui->widget_3->hide();
        // 设置拉伸比例为 2:3:3
        // 注意：现在只有3个widget了
        ui->verticalLayout->setStretch(0, 2);
        ui->verticalLayout->setStretch(1, 3);
        ui->verticalLayout->setStretch(2, 3);
    }
}
