#include "yolomanager.h"
#include "QThread"
#include "qdebug.h"

YoloManager* YoloManager::instance()
{
    static YoloManager instance;
    return &instance;
}

bool YoloManager::initialize()
{
    /*
         此处应有加载YOLO模型等初始化操作
    */

    //下面的代码创建工作线程并将当前对象移动到工作线程， detectObjects()这个槽函数能够在工作线程被执行。
    if (m_initialized) {
        qWarning() << "YOLO Manager already initialized";
        return true;
    }

    m_workerThread = new QThread(this);
    this->moveToThread(m_workerThread);

    connect(m_workerThread, &QThread::started, this, []() {
        qDebug() << "YOLO工作线程启动";
    });

    connect(m_workerThread, &QThread::finished, this, [this]() {
        qDebug() << "YOLO工作线程结束";
        m_workerThread->deleteLater();
        m_workerThread = nullptr;
    });

    m_workerThread->start();
    m_initialized = true;
    qDebug() << "YOLO Manager初始化完成，工作线程已创建";

    return true;
}

void YoloManager::detectObjects()
{
    /*
         此处应有调用摄像头进行目标检测等操作
    */
    QThread::sleep(3);  // 睡眠3秒, 模拟检测过程用作测试

    emit detectionFinished(30);
}

YoloManager::YoloManager()
{
}

YoloManager::~YoloManager()
{
    if (m_workerThread && m_workerThread->isRunning())
    {
        qDebug() << "正在停止YOLO工作线程...";
        m_workerThread->quit();
        if (!m_workerThread->wait(3000))
        {
            qWarning() << "YOLO工作线程未正常退出，强制终止";
            m_workerThread->terminate();
            m_workerThread->wait();
        }
    }
    m_initialized = false;
}
