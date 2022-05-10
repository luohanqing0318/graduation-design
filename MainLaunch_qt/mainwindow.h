#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QWidget>
#include <QLabel>

#include "picturewidget.h"
#include "myinformation.h"
#include "addhouse.h"
#include "newitem_btn.h"
#include <QSqlQuery>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void GetNewrooms();
    QString GetFindKind(int kind);
private slots:
    void On_list_Button_clicked();//动态创建QPushButton按钮信号槽函数


    void on_pushButton_2_clicked();



    void on_pushButton_10_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;

    Picturewidget *m_picturewidget;
    myinformation *m_myinformation;
    addHouse *m_paddhouse;

    int m_newrooms;
    QList<QListWidgetItem*> m_itemlist;
    QListWidgetItem * m_create_item;
    QList<newitem_btn*> m_btnList;
    newitem_btn *m_pbtn;

};

#endif // MAINWINDOW_H
