#include "mainwindow.h"
#include "src/login/logindialog.h"
#include "src/lighthouse/lighthousedemo.h"
#include <QApplication>
#include <QFile>
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include "common_data.h"

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
        db.setHostName("127.0.0.1");    //数据库服务器IP
        db.setPort(3306);
        db.setDatabaseName("odbc1");
        db.setUserName("root");		//用户名
        db.setPassword("1234");   //密码


        //判断，是否连接成功
        if(db.open() == false)	//连接失败
        {
            qDebug() << db.lastError().text();	//打印失败原因
            qDebug() << "连接失败";

        }
        else//连接成功
        {
            qDebug() << "连接成功";
        }


    SingletonMan::GetInstance()->Test();
    int temp = 99;
    common_mobiledata.setAge(temp);
    int res = common_mobiledata.age();
    qDebug()<<res;



    LoginDialog logindialog;
    LightHouseDemo lighthousedemo;

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
