#include "med_list.h"
#include "ui_med_list.h"
#include <QGraphicsDropShadowEffect>
med_list::med_list(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::med_list)
    , m_state(true)
{
    ui->setupUi(this);

    int row=0,col=0;
    for(int ii=0; ii<8; ii++)
    {
        fetch_card *card = new fetch_card(this, ii+1);
        cards.append(card);
        QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect;
        shadow->setBlurRadius(10);
        shadow->setOffset(8, 8);
        shadow->setColor(palette().shadow().color());
        card->setGraphicsEffect(shadow);

        ui->med_card_gridLayout->addWidget(card, row, col);

        col++;
        if(col > 2)
        {
            col = 0;
            row++;
        }
    }
}

void med_list::card_is_fetch(bool state)
{
    if(m_state == state)
    {
        return;
    }
    m_state = state;

    for(auto& it : cards)
    {
        it->card_is_fetch(state);
    }
}

med_list::~med_list()
{
    delete ui;
}

void med_list::on_back_mainpage_clicked()
{
    emit signal_route::instance()->switchToPage("main_page");
}


