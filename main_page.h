#ifndef MAIN_PAGE_H
#define MAIN_PAGE_H

#include <QWidget>
#include "signal_route.h"
#include "utils.h"

namespace Ui {
class main_page;
}

class main_page : public QWidget
{
    Q_OBJECT

public:
    explicit main_page(QWidget *parent = nullptr);
    ~main_page();

private slots:
    void on_main_fetch_clicked();

    void on_med_list_clicked();

    void on_main_store_clicked();

    void on_special_med_clicked();

    void on_use_record_clicked();

    void on_med_plan_clicked();

    void on_settings_clicked();

private:
    Ui::main_page *ui;
    signal_route *m_router;
};

#endif // MAIN_PAGE_H
