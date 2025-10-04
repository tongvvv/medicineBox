#include "fetch_card.h"
#include "ui_fetch_card.h"

fetch_card::fetch_card(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::fetch_card)
    , m_state(true)
{
    ui->setupUi(this);
}

fetch_card::~fetch_card()
{
    delete ui;
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
