#ifndef MEDCINE_INFORMATION_H
#define MEDCINE_INFORMATION_H

#include <QWidget>
#include "signal_route.h"

namespace Ui {
class medcine_information;
}

class medcine_information : public QWidget
{
    Q_OBJECT

public:
    explicit medcine_information(QWidget *parent = nullptr, signal_route *router = nullptr);
    ~medcine_information();

private slots:
    void on_pushButton_clicked();

private:
    Ui::medcine_information *ui;
    signal_route *m_router;
};

#endif // MEDCINE_INFORMATION_H
