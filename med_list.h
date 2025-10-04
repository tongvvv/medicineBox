#ifndef MED_LIST_H
#define MED_LIST_H

#include <QWidget>
#include "signal_route.h"
#include "fetch_card.h"
#include <QList>

namespace Ui {
class med_list;
}

class med_list : public QWidget
{
    Q_OBJECT

public:
    explicit med_list(QWidget *parent = nullptr);

    void card_is_fetch(bool state);

    ~med_list();

private slots:
    void on_back_mainpage_clicked();

private:
    Ui::med_list *ui;
    signal_route *m_router;
    QList<fetch_card*> cards;
    bool m_state; //控制卡片显示不显示下面两个按钮
};

#endif // MED_LIST_H
