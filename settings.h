#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "wifi_page.h"
#include "basic_settings_page.h"
#include "inform_settings_page.h"
#include "emergency_page.h"

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
    wifi_page *m_wifi;
    basic_settings_page *m_basic;
    inform_settings_page *m_inform;
    emergency_page *m_emerg;
};

#endif // SETTINGS_H
