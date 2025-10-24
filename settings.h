#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    explicit settings(QWidget *parent = nullptr);
    ~settings();

private slots:
    void on_back_clicked();

    void setting_selector(bool checked);
private:
    Ui::settings *ui;
};

#endif // SETTINGS_H
