#include "lighthousedemo.h"
#include "ui_lighthousedemo.h"
#include <QFileDialog>
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

    connect(pActiontSeason1,&QAction::triggered,this,&LightHouseDemo::on_actionChooseSeason1_triggered);
    connect(pActiontSeason2,&QAction::triggered,this,&LightHouseDemo::on_actionChooseSeason2_triggered);
    connect(pActiontSeason3,&QAction::triggered,this,&LightHouseDemo::on_actionChooseSeason3_triggered);
    connect(pActiontSeason4,&QAction::triggered,this,&LightHouseDemo::on_actionChooseSeason4_triggered);

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

void LightHouseDemo::on_actionChooseSeason1_triggered()
{
    qDebug()<<"choose_season1";
}

void LightHouseDemo::on_actionChooseSeason2_triggered()
{
    qDebug()<<"choose_season2";
}

void LightHouseDemo::on_actionChooseSeason3_triggered()
{
    qDebug()<<"choose_season3";
}

void LightHouseDemo::on_actionChooseSeason4_triggered()
{
    qDebug()<<"choose_season4";
}

