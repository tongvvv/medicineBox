#ifndef CHANGE_PLAN_H
#define CHANGE_PLAN_H

#include <QWidget>

namespace Ui {
class change_plan;
}

class change_plan : public QWidget
{
    Q_OBJECT

public:
    explicit change_plan(QWidget *parent = nullptr);
    ~change_plan();

private:
    Ui::change_plan *ui;
};

#endif // CHANGE_PLAN_H
