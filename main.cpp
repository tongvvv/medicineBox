#include "mainwindow.h"
#include "data_structs.h"
#include <QApplication>
#include <QPluginLoader>
#include "ocrmanager.h"
#include "yolomanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    data_manager::instance()->init(); //初始化数据库

    OcrManager::instance()->initialize();

    YoloManager::instance()->initialize();

    w.show();
    return a.exec();
}
