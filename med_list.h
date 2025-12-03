#ifndef MED_LIST_H
#define MED_LIST_H

#include <QWidget>
#include "signal_route.h"
#include "fetch_card.h"
#include <QList>
#include "med_detailed_info.h"

namespace Ui {
class med_list;
}

class med_list : public QWidget
{
    Q_OBJECT

public:
    explicit med_list(QWidget *parent = nullptr);

    void card_is_fetch(bool state); //用来控制卡片下面两个按钮是否显示的

    ~med_list();

    void getAllinfo();


private slots:
    void on_back_mainpage_clicked();
    void onPatientSelected(int index);
    void onMedicineSelected(int index);

public:
    Ui::med_list *ui;
    QList<fetch_card*> cards;
    QVector<med_detailed_info*> detailedInfoList;
    bool m_state; //控制卡片显示不显示下面两个按钮

protected:

private:

    void addUniquePatients();
    void addPatientMedicines(const QString &patientName);
    void rearrangeVisibleCards();
    void filterCards();
};

#endif // MED_LIST_H
