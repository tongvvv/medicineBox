#ifndef STORE_PAGE1_H
#define STORE_PAGE1_H

#include <QWidget>

namespace Ui {
class store_page1;
}

class store_page1 : public QWidget
{
    Q_OBJECT

public:
    explicit store_page1(QWidget *parent = nullptr);
    ~store_page1();

private slots:


private:
    Ui::store_page1 *ui;
};

#endif // STORE_PAGE1_H
