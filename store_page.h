#ifndef STORE_PAGE_H
#define STORE_PAGE_H

#include <QWidget>
#include "signal_route.h"
#include "store_page1.h"

namespace Ui {
class store_page;
}

class store_page : public QWidget
{
    Q_OBJECT

public:
    explicit store_page(QWidget *parent = nullptr);
    ~store_page();

private slots:
    void on_back_main_page_clicked();

private:
    Ui::store_page *ui;
    store_page1 *page1;
};

#endif // STORE_PAGE_H
