#ifndef SCALED_PIXMAP_LABEL_H
#define SCALED_PIXMAP_LABEL_H

#include <QObject>
#include <QLabel>
#include <QPixmap>

//为了使得图片在展示的时候能够自动适应QLabel的大小，自动伸缩，并且保持宽高比，因此写了这个类。
class scaled_pixmap_label : public QLabel
{
    Q_OBJECT
public:
    explicit scaled_pixmap_label(QWidget *parent = nullptr);

    void setPixmap(const QPixmap &p);

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    void updatePixmap();

    QPixmap m_pixmap;

signals:
    void PicClicked(QString sender);
    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // SCALED_PIXMAP_LABEL_H
