#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
       QString username = ui->lineEdit->text();
       QString password = ui->lineEdit_2->text();
       QString name = ui->lineEdit_3->text();
       QString age = ui->lineEdit_4->text();
       QString phone = ui->lineEdit_5->text();


}
