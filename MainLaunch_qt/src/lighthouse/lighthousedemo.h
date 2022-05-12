#ifndef LIGHTHOUSEDEMO_H
#define LIGHTHOUSEDEMO_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QTime>

extern float  COMMON_LIGHT_DIRECTION_Y;


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
   QTime m_time;


   QString objname() const;
   void setObjname(const QString &objname);

private slots:
   void on_actionLoadModel_triggered();
   void On_actionChooseSeason1_triggered();
    void On_actionChooseSeason2_triggered();
    void On_actionChooseSeason3_triggered();
    void On_actionChooseSeason4_triggered();

    void timer();

private:
    Ui::LightHouseDemo *ui;
    QString m_objname;
    int hours = 0;


};

#endif // LIGHTHOUSEDEMO_H
