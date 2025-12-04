#ifndef CHANGE_PLAN_CONFIRM_H
#define CHANGE_PLAN_CONFIRM_H

#include <QWidget>
#include "store_page4.h"

namespace Ui {
class change_plan_confirm;
}

class change_plan_confirm : public QWidget
{
    Q_OBJECT

public:
    explicit change_plan_confirm(QWidget *parent = nullptr);
    ~change_plan_confirm();

    store_page4* getpage4();

    void set_change(bool change);
private:
    Ui::change_plan_confirm *ui;
};

#endif // CHANGE_PLAN_CONFIRM_H
