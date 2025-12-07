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
    void update_data();
    void do_search();
private slots:
    void on_back_clicked();

    void on_Last_clicked();

    void on_next_clicked();

    void on_p_name_currentIndexChanged(int index);

    void on_m_name_currentIndexChanged(int index);

    void on_dateEdit_userDateChanged(const QDate &date);

private:
    Ui::usage_record *ui;
    QFont font;
    QVector<table_content> record;
    int currentpage;
    int totalpage;
    QMap<QString, QList<QString>> userTomed;
    void cleartable();
    void getpages();
};

#endif // USAGE_RECORD_H
