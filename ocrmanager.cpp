#include "ocrmanager.h"
#include "qdebug.h"
#include <QThread>

OcrManager* OcrManager::instance()
{
    static OcrManager instance;
    return &instance;
}

bool OcrManager::initialize()
{
    /*
         此处应有加载模型等初始化操作
    */

    //下面的代码创建工作线程并将当前对象移动到工作线程， 使得recognizeText()这个槽函数能够在工作线程被执行。
    if (m_initialized) {
        qWarning() << "OCR Manager already initialized";
        return true;
    }

    // 创建工作线程
    m_workerThread = new QThread(this);

    // 将当前对象移动到工作线程
    this->moveToThread(m_workerThread);

    // 连接线程启动信号
    connect(m_workerThread, &QThread::started, this, []() {
        qDebug() << "OCR工作线程启动";
    });

    // 连接线程结束信号，确保资源清理
    connect(m_workerThread, &QThread::finished, this, [this]() {
        qDebug() << "OCR工作线程结束";
        m_workerThread->deleteLater();
        m_workerThread = nullptr;
    });

    // 启动工作线程
    m_workerThread->start();

    m_initialized = true;
    qDebug() << "OCR Manager初始化完成，工作线程已创建";
    return true;
}

void OcrManager::recognizeText()
{
    /*
         此处应有调摄像头进行识别等操作
    */
    QThread::sleep(2);  // 睡眠2秒, 模拟识别过程用作测试

    emit recognitionFinished("(测试)定喘止咳丸");
}

OcrManager::OcrManager()
{

}

OcrManager::~OcrManager()
{
    if (m_workerThread && m_workerThread->isRunning())
    {
        qDebug() << "正在停止OCR工作线程...";

        // 请求停止线程
        m_workerThread->quit();
        if (!m_workerThread->wait(3000))
        {
            qWarning() << "OCR工作线程未正常退出，强制终止";
            m_workerThread->terminate();
            m_workerThread->wait();
        }
    }
    m_initialized = false;
}
