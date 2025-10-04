#ifndef FETCH_CARD_H
#define FETCH_CARD_H

#include <QWidget>
#include <QPainter>
#include "signal_route.h"

//这里的卡片最小设置成了442*320， 注意一下。在不同分辨率下可能要修改。

namespace Ui {
class fetch_card;
}

class fetch_card : public QWidget
{
    Q_OBJECT

public:
    explicit fetch_card(QWidget *parent = nullptr,unsigned short num = 1);
    void card_is_fetch(bool state);
    ~fetch_card();

    void set_num(unsigned short num);

    unsigned short get_num() const;

private slots:

    void on_med_info_clicked();

private:
    Ui::fetch_card *ui;
    signal_route *m_router;
    bool m_state;
    unsigned short m_num;
};

#endif // FETCH_CARD_H
