#ifndef OCRMANAGER_H
#define OCRMANAGER_H

#include <QObject>

class OcrManager : public QObject
{
    Q_OBJECT

public:
    static OcrManager* instance();

    // 初始化OCR引擎
    bool initialize();

public slots:
    // 文字识别，结果通过recognitionFinished信号传递。
    void recognizeText();

signals:
    void recognitionFinished(const QString& text);
    void errorOccurred(const QString& error);

private:
    explicit OcrManager();
    ~OcrManager();
    OcrManager(const OcrManager&) = delete;
    OcrManager& operator=(const OcrManager&) = delete;

    QThread* m_workerThread = nullptr;
    bool m_initialized = false;
    // 其他OCR相关成员变量...
};


#endif // OCRMANAGER_H
