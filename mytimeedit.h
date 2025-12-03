#ifndef MYTIMEEDIT_H
#define MYTIMEEDIT_H

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QComboBox>
#include <QFrame>
#include <QMouseEvent>
#include <QTimer>
#include <QStyle>
#include <QScreen>
#include <QDebug>
#include <QPushButton>

class ComboPopup : public QFrame {
    Q_OBJECT
public:
    ComboPopup(QWidget *parent = nullptr) : QFrame(parent)
    {
        setWindowFlags(Qt::Popup | Qt::FramelessWindowHint);
        setFrameShape(QFrame::Box);
        setStyleSheet("background-color: white; border: 1px solid #ccc;");

        QVBoxLayout *layout = new QVBoxLayout(this);
        layout->setContentsMargins(5, 5, 5, 5);
        layout->setSpacing(10);

        combo1 = new QComboBox(this);
        for(int ii=0; ii<24; ii++)
        {
            combo1->addItem(QString::asprintf("%02d时",ii));
        }
        combo1->setStyleSheet("QComboBox { padding: 5px; min-width: 45px;}");

        combo2 = new QComboBox(this);
        for(int ii=0; ii<60; ii+=5)
        {
            combo2->addItem(QString::asprintf("%02d分",ii));
        }
        combo2->setStyleSheet("QComboBox { padding: 5px; min-width: 45px;}");

        combo3 = new QComboBox(this);
        for(int ii=0; ii<10; ii++)
        {
            combo3->addItem(QString::asprintf("%d粒", ii+1));
        }
        combo3->setStyleSheet("QComboBox { padding: 5px; min-width: 45px;}");

        // 添加确认按钮
        confirmButton = new QPushButton("确认", this);
        confirmButton->setStyleSheet("QPushButton { padding: 5px; background-color: #e6f7ff; color: black; }");

        layout->addWidget(combo1);
        layout->addWidget(combo2);
        layout->addWidget(combo3);
        layout->addWidget(confirmButton);

        layout->setStretch(0,1);
        layout->setStretch(1,1);
        layout->setStretch(2,1);
        layout->setStretch(3,1);

        connect(confirmButton, &QPushButton::clicked, this, &ComboPopup::onConfirmClicked);
    }

    void showBelow(QWidget *widget)
    {
        QPoint pos = widget->mapToGlobal(QPoint(0, widget->height()));
        QRect screen = QApplication::screenAt(pos)->geometry();

        // 确保弹出框不会超出屏幕
        if (pos.y() + height() > screen.bottom())
        {
            pos.setY(widget->mapToGlobal(QPoint(0, 0)).y() - height());
        }

        move(pos);
        show();
        setFocus();
    }

    QString getValue() const
    {
        return combo1->currentText() + combo2->currentText() + combo3->currentText();
    }

protected:

signals:
    void valueSelected(const QString &value);

private slots:
    void onConfirmClicked()
    {
        emit valueSelected(getValue());
        hide();
    }
private:
    QComboBox *combo1;
    QComboBox *combo2;
    QComboBox *combo3;
    QPushButton *confirmButton;
};

class ComboLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    ComboLineEdit(QWidget *parent = nullptr)
        : QLineEdit(parent), popup(new ComboPopup(this)), isset(false)
    {
        setReadOnly(true);
        setPlaceholderText("点击选择...");
        setStyleSheet("QLineEdit { padding: 5px; }");

        connect(popup, &ComboPopup::valueSelected, this, [this](const QString &str){
            setText(str);
            isset = true;
            int shiPos = str.indexOf("时");
            int fenPos = str.indexOf("分");
            int liPos = str.indexOf("粒");
            if (shiPos == -1 || fenPos == -1 || liPos == -1) {
                return false;
            }
            // 提取各部分
            hour = str.mid(0, shiPos).toInt();
            min = str.mid(shiPos + 1, fenPos - shiPos - 1).toInt();
            nums = str.mid(fenPos + 1, liPos - fenPos - 1).toInt();
            qDebug() << hour << min << nums;
        });
    }

protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        QLineEdit::mousePressEvent(event);

        if (popup->isVisible())
        {
            popup->hide();
        }
        else
        {
            popup->showBelow(this);
        }
    }

    void focusInEvent(QFocusEvent *event) override
    {
        QLineEdit::focusInEvent(event);
        // 获得焦点时也显示弹出框
        if (!popup->isVisible())
        {
            QTimer::singleShot(0, this, [this] { popup->showBelow(this); });
        }
    }

public:
    ComboPopup *popup;
    bool isset;  //标记到底有没有被选过
    int hour;
    int min;
    int nums;
};




#endif // MYTIMEEDIT_H
