#include "logindialog.h"
#include "ui_logindialog.h"

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
