#ifndef FETCH_CARD_H
#define FETCH_CARD_H

#include <QWidget>
#include <QPainter>
#include "signal_route.h"
#include "dialog_fetch_med.h"
#include "med_detailed_info.h"

//这里的卡片设置了最小宽度，高度（ui文件中），是为了美观考虑。 注意一下。在不同分辨率下可能要修改，以便达到最佳显示效果。

namespace Ui {
class fetch_card;
}

class fetch_card : public QWidget
{
    Q_OBJECT

public:
    explicit fetch_card(QWidget *parent = nullptr,unsigned short num = 1);
    void card_is_fetch(bool state);
    ~fetch_card();

    void set_num(unsigned short num);

    unsigned short get_num() const;

    void set_detailedinfo(med_detailed_info* info);

    med_detailed_info m_detailedinfo;
    void waitforres();
public slots:
    void handle_OCR(QString str);
    void handle_yolo(int num);
private slots:

    void on_med_info_clicked();

    void on_card_get_med_clicked();

    void on_card_plan_clicked();

private:
    void handleNormalReturn();

    void handleNoReturn();

    void handleWrongReturn();

    void handleRecognitionError();

    template <typename DialogType>
    DialogType* createDialog(double widthRatio = 0.75, double heightRatio = 0.65);

    void handle_menu(QDialog *dialog);

    Ui::fetch_card *ui;
    bool m_state;
    unsigned short m_num;
};

#endif // FETCH_CARD_H
