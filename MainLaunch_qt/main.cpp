#include "mainwindow.h"
#include "src/login/logindialog.h"
#include "src/lighthouse/lighthousedemo.h"
#include "src/sign/signdialog.h"
#include <QApplication>
#include <QFile>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "common_data.h"

void ConnectSql(QSqlDatabase &db);

void ConnectSql(QSqlDatabase &db)
{
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("odbc1");
    db.setUserName("root");
    db.setPassword("1234");
    if(db.open() == false)
    {
        qDebug() << db.lastError().text();
        qDebug() << "sql connect fail";

    }
    else//连接成功
    {
        qDebug() << "sql connect success";
    }

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss(":/Ubuntu.qss");

        if (qss.open(QFile::ReadOnly))
        {
            qDebug("style open success");
            QString style = QLatin1String(qss.readAll());
            a.setStyleSheet(style);
            qss.close();
        }
        else
        {
            qDebug("style open failed");
        }
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
        //连接数据库
    ConnectSql(db);

//    SingletonMan::GetInstance()->Test();
//    int temp = 29;
//    SingletonMan::GetMobileDataInstance()->setAge(temp);
//    int res = SingletonMan::GetMobileDataInstance()->age();
//    qDebug()<<res;





    SignDialog signdialog;
    LoginDialog logindialog;
    LightHouseDemo lighthousedemo;
    signdialog.show();
    MainWindow w;
    if (logindialog.exec() == QDialog::Accepted)
       {
          //w.show();
        lighthousedemo.show();
          return a.exec();
       }

    w.show();

    return a.exec();
}
