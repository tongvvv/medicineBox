#ifndef FETCH_CARD_H
#define FETCH_CARD_H

#include <QWidget>
#include <QPainter>
#include "signal_route.h"

namespace Ui {
class fetch_card;
}

class fetch_card : public QWidget
{
    Q_OBJECT

public:
    explicit fetch_card(QWidget *parent = nullptr);
    ~fetch_card();

private slots:

    void on_med_info_clicked();

private:
    Ui::fetch_card *ui;
    signal_route *m_router;
};

#endif // FETCH_CARD_H
