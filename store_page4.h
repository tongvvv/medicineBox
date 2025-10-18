#ifndef STORE_PAGE4_H
#define STORE_PAGE4_H

#include <QWidget>
#include "dialog_store_success.h"

namespace Ui {
class store_page4;
}

class store_page4 : public QWidget
{
    Q_OBJECT

public:
    explicit store_page4(QWidget *parent = nullptr);
    ~store_page4();

private slots:
    void on_confirm_store_clicked();

private:
    Ui::store_page4 *ui;
};

#endif // STORE_PAGE4_H
