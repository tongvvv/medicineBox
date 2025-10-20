#ifndef STORE_PAGE2_H
#define STORE_PAGE2_H

#include <QWidget>

namespace Ui {
class store_page2;
}

class store_page2 : public QWidget
{
    Q_OBJECT

public:
    explicit store_page2(QWidget *parent = nullptr);
    ~store_page2();

private:
    Ui::store_page2 *ui;

};

#endif // STORE_PAGE2_H
