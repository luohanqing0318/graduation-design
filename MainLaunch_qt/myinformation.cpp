#include "myinformation.h"
#include "ui_myinformation.h"

myinformation::myinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myinformation)
{
    ui->setupUi(this);
}

myinformation::~myinformation()
{
    delete ui;
}
