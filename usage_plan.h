#ifndef USAGE_PLAN_H
#define USAGE_PLAN_H

#include <QWidget>
#include "plan_card.h"
#include <QVector>
#include <QDate>

namespace Ui {
class usage_plan;
}

class usage_plan : public QWidget
{
    Q_OBJECT

public:
    explicit usage_plan(QWidget *parent = nullptr);
    ~usage_plan();

private slots:
    void on_back_clicked();

    void date_selecter(bool checked);
private:
    Ui::usage_plan *ui;
    QVector<plan_card*> m_cards;
    void update_date();
};

#endif // USAGE_PLAN_H
