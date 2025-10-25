#ifndef BASIC_SETTINGS_PAGE_H
#define BASIC_SETTINGS_PAGE_H

#include <QWidget>

namespace Ui {
class basic_settings_page;
}

class basic_settings_page : public QWidget
{
    Q_OBJECT

public:
    explicit basic_settings_page(QWidget *parent = nullptr);
    ~basic_settings_page();

private:
    Ui::basic_settings_page *ui;
};

#endif // BASIC_SETTINGS_PAGE_H
