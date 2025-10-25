#ifndef WIFI_PAGE_H
#define WIFI_PAGE_H

#include <QWidget>
#include "wifi_item.h"

namespace Ui {
class wifi_page;
}

class wifi_page : public QWidget
{
    Q_OBJECT

public:
    explicit wifi_page(QWidget *parent = nullptr);
    ~wifi_page();

private:
    Ui::wifi_page *ui;
};

#endif // WIFI_PAGE_H
