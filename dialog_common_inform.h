#ifndef DIALOG_COMMON_INFORM_H
#define DIALOG_COMMON_INFORM_H

#include <QDialog>

namespace Ui {
class dialog_common_inform;
}

class dialog_common_inform : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_common_inform(QWidget *parent = nullptr);
    ~dialog_common_inform();

    void setContent(const QString& str);

    void setState(bool state);
private slots:
    void on_confirm_clicked();

private:
    Ui::dialog_common_inform *ui;
};

#endif // DIALOG_COMMON_INFORM_H
