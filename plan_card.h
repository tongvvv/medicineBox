#ifndef PLAN_CARD_H
#define PLAN_CARD_H
#include "utils.h"

#include <QWidget>

namespace Ui {
class plan_card;
}

class plan_card : public QWidget
{
    Q_OBJECT

public:
    explicit plan_card(MedReminderTask info, QWidget *parent = nullptr);
    ~plan_card();

private:
    Ui::plan_card *ui;
};

#endif // PLAN_CARD_H
