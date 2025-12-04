#ifndef STORE_PAGE_H
#define STORE_PAGE_H

#include <QWidget>
#include <QLabel>
#include "signal_route.h"
#include "store_page1.h"
#include "store_page2.h"
#include "store_page3.h"
#include "store_page4.h"

namespace Ui {
class store_page;
}

class store_page : public QWidget
{
    Q_OBJECT

public:
    explicit store_page(QWidget *parent = nullptr);
    ~store_page();

    void change_page1();
    void waitforres();

private slots:
    void on_back_main_page_clicked();

    void change_page2();

    void change_page3();

    void skip_page2();

    void change_page4();

    void skip_page4();

private:
    void label2white(QLabel *label);
    void label2blue(QLabel *label);
    void all_label_white(void);
    void handle_OCR(QString str);
    void handle_yolo(int num);

    Ui::store_page *ui;
    store_page1 *page1;
    store_page2 *page2;
    store_page3 *page3;
    store_page4 *page4;

};

#endif // STORE_PAGE_H
