#ifndef USAGE_RECORD_H
#define USAGE_RECORD_H

#include <QWidget>
#include "utils.h"
#include <QVector>

namespace Ui {
class usage_record;
}

class usage_record : public QWidget
{
    Q_OBJECT

public:
    explicit usage_record(QWidget *parent = nullptr);
    ~usage_record();

    void addItem(unsigned int row, unsigned int col, const QString& str);
    void addContent(unsigned int row, table_content content);
private slots:
    void on_back_clicked();

    void on_Last_clicked();

    void on_next_clicked();

private:
    Ui::usage_record *ui;
    QFont font;
    QVector<table_content> record;
    int page;
};

#endif // USAGE_RECORD_H
