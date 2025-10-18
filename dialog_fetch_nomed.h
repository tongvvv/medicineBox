#ifndef DIALOG_FETCH_NOMED_H
#define DIALOG_FETCH_NOMED_H

#include <QDialog>

namespace Ui {
class dialog_fetch_nomed;
}

class dialog_fetch_nomed : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fetch_nomed(QWidget *parent = nullptr);
    ~dialog_fetch_nomed();

private slots:
    void on_close_clicked();

    void on_confirm_clicked();

    void on_again_clicked();

private:
    Ui::dialog_fetch_nomed *ui;
};

#endif // DIALOG_FETCH_NOMED_H
