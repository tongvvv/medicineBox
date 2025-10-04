#ifndef FETCH_CARD_H
#define FETCH_CARD_H

#include <QWidget>
#include <QPainter>
#include "signal_route.h"

//这里的卡片最小设置成了400*290， 注意一下。

namespace Ui {
class fetch_card;
}

class fetch_card : public QWidget
{
    Q_OBJECT

public:
    explicit fetch_card(QWidget *parent = nullptr);
    void card_is_fetch(bool state);
    ~fetch_card();

private slots:

    void on_med_info_clicked();

private:
    Ui::fetch_card *ui;
    signal_route *m_router;
    bool m_state;
};

#endif // FETCH_CARD_H
