#include "signdialog.h"
#include "ui_signdialog.h"

SignDialog::SignDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignDialog)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->radioButton, 0);
    ui->buttonGroup->setId(ui->radioButton_2, 1);
}

SignDialog::~SignDialog()
{
    delete ui;
}

void SignDialog::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString name = ui->lineEdit_3->text();
    int age = ui->lineEdit_4->text().toInt();
    QString phone = ui->lineEdit_5->text();
    bool who = false;
    QString sql = "";
    if(ui->buttonGroup->checkedId() == 0)
     {
        who = false;
        sql = "INSERT INTO tenants (username, password, name, age, phone) VALUES (:username, :password, :name, :age, :phone);";
     }else if(ui->buttonGroup->checkedId() == 1)
    {
        who = true;
        sql = "INSERT INTO landlords (username, password, name, age, phone) VALUES (:username, :password, :name, :age, :phone);";
    }

    if(username == ""  || password == "" || name == "" || age == 0 || phone == "")
    {
         QMessageBox::about(NULL, QStringLiteral("消息"), QStringLiteral("清完善信息"));
         return;
    }
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":name", name);
    query.bindValue(":age", age);
    query.bindValue(":phone", phone);
    if(query.exec())
    {
        qDebug()<<"signdialog : sql insert success";
    }



//    QString sql = QString("select COLUMN_NAME from information_schema.COLUMNS where table_name = 'tenants'");
//        QSqlQuery query;
//        if(query.exec(sql)) //执行sql语句是否成功
//        {


//            while(query.next())//指向下一条
//            {
//                //根据下标找到对应字段值
//                qDebug()<<query.value(0).toString();
//            }

//        }else
//        {
//            qDebug()<<query.lastError();
//        }

}
