#ifndef LIGHTHOUSEDEMO_H
#define LIGHTHOUSEDEMO_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
namespace Ui {
class LightHouseDemo;
}

class LightHouseDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit LightHouseDemo(QWidget *parent = 0);
    ~LightHouseDemo();

public:
    //菜单栏
   QMenuBar *pMenuBar;

   QMenu *pMenuChooseSeason;


   QAction *pActiontSeason1;
   QAction *pActiontSeason2;
   QAction *pActiontSeason3;
   QAction *pActiontSeason4;

private slots:
    void on_actionLoadModel_triggered();
    void on_actionChooseSeason_triggered();


private:
    Ui::LightHouseDemo *ui;


};

#endif // LIGHTHOUSEDEMO_H
