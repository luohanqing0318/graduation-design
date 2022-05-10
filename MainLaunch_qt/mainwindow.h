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

private slots:
    void On_list_Button_clicked();//动态创建QPushButton按钮信号槽函数


    void on_pushButton_2_clicked();



private:
    Ui::MainWindow *ui;

    Picturewidget *m_picturewidget;
myinformation *m_myinformation;
    QList<QPushButton*> m_btnList;
    QPushButton *m_pbtn;
    int m_btnNum;

    int m_newrooms;
    QList<QListWidgetItem*> m_itemlist;
    QListWidgetItem * m_create_item;
};

#endif // MAINWINDOW_H
