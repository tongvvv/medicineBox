#ifndef WIFI_ITEM_H
#define WIFI_ITEM_H

#include <QWidget>

namespace Ui {
class wifi_item;
}

class wifi_item : public QWidget
{
    Q_OBJECT

public:
    explicit wifi_item(QWidget *parent = nullptr);
    ~wifi_item();

private slots:
    void on_pushButton_clicked();

private:
    Ui::wifi_item *ui;
};

#endif // WIFI_ITEM_H
