#include "mainwindow.h"
#include "src/login/logindialog.h"
#include "src/lighthouse/lighthousedemo.h"
#include <QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/Ubuntu.qss");

        if (qss.open(QFile::ReadOnly))
        {
            qDebug("open success");
            QString style = QLatin1String(qss.readAll());
            a.setStyleSheet(style);
            qss.close();
        }
        else
        {
            qDebug("Open failed");
        }
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
