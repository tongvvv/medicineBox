#ifndef DIALOG_STORE_SUCCESS_H
#define DIALOG_STORE_SUCCESS_H

#include <QDialog>
#include "signal_route.h"
#include <QGraphicsDropShadowEffect>

namespace Ui {
class dialog_store_success;
}

class dialog_store_success : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_store_success(QWidget *parent = nullptr);
    ~dialog_store_success();

private slots:
    void on_pushButton_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::dialog_store_success *ui;
};

#endif // DIALOG_STORE_SUCCESS_H
