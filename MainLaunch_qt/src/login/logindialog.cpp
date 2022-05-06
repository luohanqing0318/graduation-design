#include "logindialog.h"
#include "ui_logindialog.h"
#include "common_data.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->radioButton_1, 0);
    ui->buttonGroup->setId(ui->radioButton_2, 1);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    QString username = ui->username_lineEdit->text();
    QString password = ui->password_lineEdit->text();
    QString sql;
    if(ui->buttonGroup->checkedId() == 0)
     {

        sql = "SELECT * FROM `tenants` WHERE username = :username and `password` = :password;";
     }else if(ui->buttonGroup->checkedId() == 1)
    {

        sql = "SELECT * FROM `landlords` WHERE username = :username and `password` = :password;";
    }

    if(username == ""  || password == "")
    {
         QMessageBox::about(NULL, "消息", "清完善信息");
         return;
    }
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    if(query.exec())
    {
        qDebug()<<"signdialog : sql select success";
        while (query.next()) {
                QString sqlusername = query.value(0).toString();
                SingletonMan::GetMobileDataInstance()->setUsername(sqlusername);
                QString sqlpassword = query.value(1).toString();
                SingletonMan::GetMobileDataInstance()->setPassword(sqlpassword);
                QString sqlname = query.value(2).toString();
                SingletonMan::GetMobileDataInstance()->setName(sqlname);
                int sqlage = query.value(3).toInt();
                SingletonMan::GetMobileDataInstance()->setAge(sqlage);
                QString sqlphone = query.value(4).toString();
                SingletonMan::GetMobileDataInstance()->setPhone(sqlphone);

        }

        qDebug()<<"singletonman init:"<<SingletonMan::GetMobileDataInstance()->username()<<SingletonMan::GetMobileDataInstance()->password()<<SingletonMan::GetMobileDataInstance()->name()<<SingletonMan::GetMobileDataInstance()->age()<<SingletonMan::GetMobileDataInstance()->phone();
        accept();
    }else{
         qDebug()<<"signdialog : sql select failed";
        QMessageBox::about(NULL, "错误", "用户名或密码错误");
        return;
    }




}



void LoginDialog::on_pushButton_2_clicked()
{
    accept();
}
