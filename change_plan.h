#ifndef CHANGE_PLAN_H
#define CHANGE_PLAN_H

#include <QWidget>
#include "store_page3.h"

namespace Ui {
class change_plan;
}

class change_plan : public QWidget
{
    Q_OBJECT

public:
    explicit change_plan(QWidget *parent = nullptr);
    ~change_plan();

    store_page3* getpage(void);
public:
    Ui::change_plan *ui;
};

#endif // CHANGE_PLAN_H
