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
#include "src/lighthouse/lighthousedemo.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void On_list_Button_clicked();//动态创建QPushButton按钮信号槽函数


private:
    Ui::MainWindow *ui;
    LightHouseDemo m_lighthouse;
    QList<QPushButton*> m_btnList;
    QPushButton *m_pbtn;
    int m_btnNum;
};

#endif // MAINWINDOW_H
