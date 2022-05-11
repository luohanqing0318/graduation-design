#include "tenantsbought_information.h"
#include "ui_tenantsbought_information.h"

tenantsbought_information::tenantsbought_information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tenantsbought_information)
{
    ui->setupUi(this);
}

tenantsbought_information::~tenantsbought_information()
{
    delete ui;
}

void tenantsbought_information::on_pushButton_clicked()
{
    this->~tenantsbought_information();
}
