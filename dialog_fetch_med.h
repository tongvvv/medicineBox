#ifndef DIALOG_FETCH_MED_H
#define DIALOG_FETCH_MED_H

#include <QDialog>
#include <QGraphicsDropShadowEffect>
#include <QMenu>

namespace Ui {
class dialog_fetch_med;
}

class dialog_fetch_med : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_fetch_med(QWidget *parent = nullptr);
    ~dialog_fetch_med();

    void set_content(const QString& title, const QString& content, const QString& button, bool ismenu);

    int  get_ret() { return ret; }

private slots:
    void on_toolButton_2_clicked();

    void on_recover_box_clicked();

    void onMenuActionTriggered(QAction *action);

private:
    void setupMenu(void);
    void handleNormalReturn();
    void handleNoReturn();
    void handleWrongReturn();
    void handleRecognitionError();

    Ui::dialog_fetch_med *ui;
    QMenu *menu;
    int   ret;
    bool  menu_flag;
};

#endif // DIALOG_FETCH_MED_H
