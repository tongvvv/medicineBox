#include "inform_settings_page.h"
#include "ui_inform_settings_page.h"
#include "scaled_pixmap_label.h"

inform_settings_page::inform_settings_page(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inform_settings_page)
{
    ui->setupUi(this);

    QImage image(":/images/voice.png");
    ui->voice->setPixmap(QPixmap::fromImage(image));
    QImage image2(":/images/music.png");
    ui->music->setPixmap(QPixmap::fromImage(image2));
    QImage image3(":/images/ad.png");
    ui->ad->setPixmap(QPixmap::fromImage(image3));
    QImage image4(":/images/sound.png");
    ui->sound->setPixmap(QPixmap::fromImage(image4));

    connect(ui->voice, &scaled_pixmap_label::PicClicked, this, &inform_settings_page::change_inform_action);
    connect(ui->music, &scaled_pixmap_label::PicClicked, this, &inform_settings_page::change_inform_action);
    connect(ui->ad, &scaled_pixmap_label::PicClicked, this, &inform_settings_page::change_inform_action);

    change_inform_action("music");

    ui->lineEdit->setInputMask("99");
    ui->lineEdit_4->setInputMask("99");
}

inform_settings_page::~inform_settings_page()
{
    delete ui;
}

void inform_settings_page::change_inform_action(const QString& name)
{
    if(name == "voice")
    {
        ui->voice_text->setStyleSheet(R"(
            color:blue;
        )");
        ui->music_text->setStyleSheet(R"(
            color:black;
        )");
        ui->ad_text->setStyleSheet(R"(
            color:black;
        )");
    }
    else if(name == "music")
    {
        ui->voice_text->setStyleSheet(R"(
            color:black;
        )");
        ui->music_text->setStyleSheet(R"(
            color:blue;
        )");
        ui->ad_text->setStyleSheet(R"(
            color:black;
        )");
    }
    else if(name == "ad")
    {
        ui->voice_text->setStyleSheet(R"(
            color:black;
        )");
        ui->music_text->setStyleSheet(R"(
            color:black;
        )");
        ui->ad_text->setStyleSheet(R"(
            color:blue;
        )");
    }
}
