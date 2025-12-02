#ifndef YOLOMANAGER_H
#define YOLOMANAGER_H

#include <QObject>

class YoloManager : public QObject
{
    Q_OBJECT

public:
    static YoloManager* instance();

    // 初始化YOLO引擎
    bool initialize();

public slots:
    // 目标检测，结果通过detectionFinished信号传递
    void detectObjects();

signals:
    // 检测完成信号，返回数量
    void detectionFinished(unsigned int nums);
    void errorOccurred(const QString& error);

private:
    explicit YoloManager();
    ~YoloManager();
    YoloManager(const YoloManager&) = delete;
    YoloManager& operator=(const YoloManager&) = delete;

    QThread* m_workerThread = nullptr;
    bool m_initialized = false;
    // 其他YOLO相关成员变量...
};

#endif // YOLOMANAGER_H
