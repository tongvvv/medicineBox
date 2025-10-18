#ifndef DIALOG_FETCH_FORCE_STORE_H
#define DIALOG_FETCH_FORCE_STORE_H

#include <QDialog>

namespace Ui {
class dialog_fetch_force_store;
}

class dialog_fetch_force_store : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fetch_force_store(QWidget *parent = nullptr);
    ~dialog_fetch_force_store();

private slots:
    void on_change_plan_clicked();

    void on_force_store_clicked();

    void on_close_clicked();

private:
    Ui::dialog_fetch_force_store *ui;
};

#endif // DIALOG_FETCH_FORCE_STORE_H
