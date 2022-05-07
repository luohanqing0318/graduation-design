#ifndef LIGHTHOUSEDEMO_H
#define LIGHTHOUSEDEMO_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
extern float  COMMON_LIGHT_DIRECTION_X;
extern float  COMMON_LIGHT_DIRECTION_Y;
extern float  COMMON_LIGHT_DIRECTION_Z;

extern float  COMMON_AMBIENT_LIGHT_R;
extern float  COMMON_AMBIENT_LIGHT_G;
extern float  COMMON_AMBIENT_LIGHT_B;

extern float  COMMON_DIFFUSE_LIGHT_R;
extern float  COMMON_DIFFUSE_LIGHT_G;
extern float  COMMON_DIFFUSE_LIGHT_B;

extern float  COMMON_SPECULAR_LIGHT_R;
extern float  COMMON_SPECULAR_LIGHT_G;
extern float  COMMON_SPECULAR_LIGHT_B;


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
    void On_actionChooseSeason1_triggered();
    void On_actionChooseSeason2_triggered();
    void On_actionChooseSeason3_triggered();
    void On_actionChooseSeason4_triggered();

private:
    Ui::LightHouseDemo *ui;


};

#endif // LIGHTHOUSEDEMO_H
