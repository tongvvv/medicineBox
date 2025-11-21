#ifndef EMERGENCY_PAGE_H
#define EMERGENCY_PAGE_H

#include <QWidget>

namespace Ui {
class emergency_page;
}

class emergency_page : public QWidget
{
    Q_OBJECT

public:
    explicit emergency_page(QWidget *parent = nullptr);
    ~emergency_page();

protected:

private:
    Ui::emergency_page *ui;
};

#endif // EMERGENCY_PAGE_H
