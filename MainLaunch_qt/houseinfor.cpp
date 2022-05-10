#include "houseinfor.h"
#include "ui_houseinfor.h"

houseinfor::houseinfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::houseinfor)
{
    ui->setupUi(this);
}

houseinfor::~houseinfor()
{
    delete ui;
}
