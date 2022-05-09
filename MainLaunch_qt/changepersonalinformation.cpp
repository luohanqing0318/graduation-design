#include "changepersonalinformation.h"
#include "ui_changepersonalinformation.h"

changepersonalinformation::changepersonalinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changepersonalinformation)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButton_clicked()));
}

changepersonalinformation::~changepersonalinformation()
{
    delete ui;
}

void changepersonalinformation::on_pushButton_2_clicked()
{

}

void changepersonalinformation::pushButton_clicked()
{
    close();
}
