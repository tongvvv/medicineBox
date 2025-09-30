#include "medcine_information.h"
#include "ui_medcine_information.h"

medcine_information::medcine_information(QWidget *parent, signal_route *router)
    : QWidget(parent)
    , ui(new Ui::medcine_information)
    , m_router(router)
{
    ui->setupUi(this);
}

medcine_information::~medcine_information()
{
    delete ui;
}

void medcine_information::on_pushButton_clicked()
{
    if(m_router)
        emit m_router->switchToPage("med_list");
}

