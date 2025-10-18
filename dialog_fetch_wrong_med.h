#ifndef DIALOG_FETCH_WRONG_MED_H
#define DIALOG_FETCH_WRONG_MED_H

#include <QDialog>

namespace Ui {
class dialog_fetch_wrong_med;
}

class dialog_fetch_wrong_med : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fetch_wrong_med(QWidget *parent = nullptr);
    ~dialog_fetch_wrong_med();

private slots:
    void on_again_clicked();

    void on_force_store_clicked();


private:
    Ui::dialog_fetch_wrong_med *ui;
};

#endif // DIALOG_FETCH_WRONG_MED_H
