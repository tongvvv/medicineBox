#ifndef MED_LIST_H
#define MED_LIST_H

#include <QWidget>
#include "signal_route.h"
#include "fetch_card.h"

namespace Ui {
class med_list;
}

class med_list : public QWidget
{
    Q_OBJECT

public:
    explicit med_list(QWidget *parent = nullptr);
    ~med_list();

private slots:
    void on_back_mainpage_clicked();

private:
    Ui::med_list *ui;
    signal_route *m_router;


};

#endif // MED_LIST_H
