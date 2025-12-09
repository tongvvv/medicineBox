#include "mainwindow.h"
#include "data_structs.h"
#include <QApplication>
#include <QPluginLoader>
#include "ocrmanager.h"
#include "yolomanager.h"
#include "medreminder.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    data_manager::instance()->init(); //初始化数据库

    OcrManager::instance()->initialize();

    YoloManager::instance()->initialize();

    MainWindow w;

    w.show();
    return a.exec();
}
