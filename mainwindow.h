#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "main_page.h"
#include "med_list.h"
#include "medcine_information.h"
#include "signal_route.h"
#include "store_page.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    signal_route *m_router;
    main_page *mainpage;
    med_list *medlist;
    medcine_information *medinfo;
    store_page *StorePage;

private slots:
    void handleSwitchToPage(const QString &pageName);

};
#endif // MAINWINDOW_H
