#include "landlordsbought_information.h"
#include "ui_landlordsbought_information.h"

landlordsbought_information::landlordsbought_information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::landlordsbought_information)
{
    ui->setupUi(this);
}

landlordsbought_information::~landlordsbought_information()
{
    delete ui;
}

void landlordsbought_information::on_pushButton_clicked()
{
    this->~landlordsbought_information();
}
