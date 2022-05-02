#include "lighthousedemo.h"
#include "ui_lighthousedemo.h"
#include <QFileDialog>
float  COMMON_LIGHT_DIRECTION_X = 1.0f;
float  COMMON_LIGHT_DIRECTION_Y = 1.0f;
float  COMMON_LIGHT_DIRECTION_Z = 1.0f;
LightHouseDemo::LightHouseDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LightHouseDemo)
{
    ui->setupUi(this);
    setCentralWidget(ui->openGLWidget);

#ifdef USE_DEFAULT_MENU_BAR
    pMenuBar = this->menuBar();
#else
    pMenuBar = new QMenuBar(this);
#endif
    pMenuChooseSeason = new QMenu("选择季节",this);

    pActiontSeason1 = new QAction("春季",this);
    pActiontSeason2 = new QAction("夏季",this);
    pActiontSeason3 = new QAction("秋季",this);
    pActiontSeason4 = new QAction("冬季",this);

    pMenuChooseSeason->addAction(pActiontSeason1);
    pMenuChooseSeason->addAction(pActiontSeason2);
    pMenuChooseSeason->addAction(pActiontSeason3);
    pMenuChooseSeason->addAction(pActiontSeason4);

    pMenuBar->addMenu(pMenuChooseSeason);

    connect(pActiontSeason1,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason1_triggered);
    connect(pActiontSeason2,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason2_triggered);
    connect(pActiontSeason3,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason3_triggered);
    connect(pActiontSeason4,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason4_triggered);



#ifndef USE_DEFAULT_MENU_BAR

     setMenuBar(pMenuBar);
 #endif
}

LightHouseDemo::~LightHouseDemo()
{
    delete ui;
}

void LightHouseDemo::on_actionLoadModel_triggered()
{
//    QString str = QFileDialog::getOpenFileName(this, "选择文件", "" , "OBJ(*.obj);;FBX(*.fbx);;ALL FILES(*.*)");
    QString str = "F:/House_blender/house01.obj";
    ui->openGLWidget->LoadModel(str.toStdString());
}

void LightHouseDemo::On_actionChooseSeason1_triggered()
{
    qDebug()<<"choose_season1";
    COMMON_LIGHT_DIRECTION_X = 2.0f;
    COMMON_LIGHT_DIRECTION_Y = 2.0f;
    COMMON_LIGHT_DIRECTION_Z = 1.3f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason2_triggered()
{
    qDebug()<<"choose_season2";
    COMMON_LIGHT_DIRECTION_X = 1.0f;
    COMMON_LIGHT_DIRECTION_Y = 1.0f;
    COMMON_LIGHT_DIRECTION_Z = 0.8f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason3_triggered()
{
    qDebug()<<"choose_season3";
    COMMON_LIGHT_DIRECTION_X = 2.0f;
    COMMON_LIGHT_DIRECTION_Y = 2.0f;
    COMMON_LIGHT_DIRECTION_Z = 1.3f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason4_triggered()
{
    qDebug()<<"choose_season4";
    COMMON_LIGHT_DIRECTION_X = 0.5f;
    COMMON_LIGHT_DIRECTION_Y = 0.4f;
    COMMON_LIGHT_DIRECTION_Z = 0.3f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

