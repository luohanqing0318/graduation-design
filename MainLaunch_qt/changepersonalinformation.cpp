#include "changepersonalinformation.h"
#include "ui_changepersonalinformation.h"
#include "common_data.h"
changepersonalinformation::changepersonalinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::changepersonalinformation)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButton_clicked()));

    QString sqlusername = SingletonMan::GetMobileDataInstance()->username();
    ui->lineEdit->setText(sqlusername);
    QString sqlpassword = SingletonMan::GetMobileDataInstance()->password();
    ui->lineEdit_2->setText(sqlpassword);
    QString sqlname = SingletonMan::GetMobileDataInstance()->name();
    ui->lineEdit_3->setText(sqlname);
    QString sqlage = QString::number(SingletonMan::GetMobileDataInstance()->age());
    ui->lineEdit_4->setText(sqlage);
    QString sqlphone = SingletonMan::GetMobileDataInstance()->phone();
    ui->lineEdit_5->setText(sqlphone);


}

changepersonalinformation::~changepersonalinformation()
{
    delete ui;
}

void changepersonalinformation::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
     QString name = ui->lineEdit_3->text();
     int age = ui->lineEdit_4->text().toInt();
     QString phone = ui->lineEdit_5->text();
      QString sql = "";
     if(SingletonMan::GetMobileDataInstance()->getWho())
     {


        sql = "UPDATE tenants SET username = :username, password = :password, name = :name, age = :age , phone = :phone WHERE username = :a6;";
        QSqlQuery query;
        query.prepare(sql);
        query.bindValue(":username", username);
        query.bindValue(":password", password);
        query.bindValue(":name", name);
        query.bindValue(":age", age);
        query.bindValue(":phone", phone);
        query.bindValue(":a6",  SingletonMan::GetMobileDataInstance()->username());
        if(query.exec())
        {
            qDebug()<<"signdialog : sql update success";
        }



     }else{
         sql = "UPDATE landlords SET username = :username, password = :password, name = :name, age = :age , phone = :phone WHERE username = :a6;";
         QSqlQuery query;
         query.prepare(sql);
         query.bindValue(":username", username);
         query.bindValue(":password", password);
         query.bindValue(":name", name);
         query.bindValue(":age", age);
         query.bindValue(":phone", phone);
         query.bindValue(":a6",  SingletonMan::GetMobileDataInstance()->username());
         if(query.exec())
         {
             qDebug()<<"signdialog : sql update success";
         }
     }
}

void changepersonalinformation::pushButton_clicked()
{
    close();
}
