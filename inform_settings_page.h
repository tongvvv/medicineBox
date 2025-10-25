#ifndef INFORM_SETTINGS_PAGE_H
#define INFORM_SETTINGS_PAGE_H

#include <QWidget>

namespace Ui {
class inform_settings_page;
}

class inform_settings_page : public QWidget
{
    Q_OBJECT

public:
    explicit inform_settings_page(QWidget *parent = nullptr);
    ~inform_settings_page();

private slots:
    void change_inform_action(const QString& name);
private:
    Ui::inform_settings_page *ui;
};

#endif // INFORM_SETTINGS_PAGE_H
