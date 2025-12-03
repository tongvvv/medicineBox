#ifndef STORE_PAGE3_H
#define STORE_PAGE3_H

#include <QWidget>
#include <QPushButton>
#include <QList>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QTimer>
#include <QScrollBar>
#include "mytimeedit.h"

namespace Ui {
class store_page3;
}

class store_page3 : public QWidget
{
    Q_OBJECT

public:
    explicit store_page3(QWidget *parent = nullptr);
    ~store_page3();

    bool isset();  //检查这个页面设置有没有弄完全。
    QString getuser();
    int getfreq();//间隔天数
    QDateTime getstarttime();
    QString geteattime(); //服药时间
    QString getnums();
private slots:
    void on_more_freopt_clicked();
    void on_more_timeopt_clicked();
    void onTimeCountClicked(bool checked);

private:
    QPushButton* addFrequencyButton(const QString &text = "");
    Ui::store_page3 *ui;
    QList<QPushButton*> eat_fre;  //存放吃药间隔多少天
    QList<QPushButton*> eat_count; //存放一天吃多少次
    QList<ComboLineEdit*> eat_time; //存放具体的时间
};

#endif // STORE_PAGE3_H
