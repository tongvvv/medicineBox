#include "med_list.h"
#include "ui_med_list.h"
#include <QGraphicsDropShadowEffect>
med_list::med_list(QWidget *parent, signal_route *router)
    : QWidget(parent)
    , ui(new Ui::med_list)
    , m_router(router)
{
    ui->setupUi(this);

    int row=0,col=0;
    for(int ii=0; ii<10; ii++)
    {
        fetch_card *card = new fetch_card(this, m_router);

        QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect;
        shadow->setBlurRadius(10);
        shadow->setOffset(5, 5);
        shadow->setColor(palette().shadow().color());
        card->setGraphicsEffect(shadow);

        ui->med_card_gridLayout->addWidget(card, row, col);

        col++;
        if(col > 3)
        {
            col = 0;
            row++;
        }
    }
}

med_list::~med_list()
{
    delete ui;
}

void med_list::on_back_mainpage_clicked()
{
    emit m_router->switchToPage("main_page");
}

