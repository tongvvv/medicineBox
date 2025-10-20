#include "scaled_pixmap_label.h"


scaled_pixmap_label::scaled_pixmap_label(QWidget *parent)
    : QLabel(parent)
{
    setAlignment(Qt::AlignCenter);
    setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
}

void scaled_pixmap_label::setPixmap(const QPixmap &p)
{
    m_pixmap = p;
    updatePixmap();
}

void scaled_pixmap_label::resizeEvent(QResizeEvent *event)
{
    QLabel::resizeEvent(event);
    updatePixmap();
}

void scaled_pixmap_label::updatePixmap()
{
    if (!m_pixmap.isNull() && !size().isEmpty()) {
        QPixmap scaled = m_pixmap.scaled(
            size(),
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
            );
        QLabel::setPixmap(scaled);
    }
}
