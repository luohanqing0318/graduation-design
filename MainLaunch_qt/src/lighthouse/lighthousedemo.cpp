#include "lighthousedemo.h"
#include "ui_lighthousedemo.h"
#include <QFileDialog>
float  COMMON_LIGHT_DIRECTION_X = 1.0f;
float  COMMON_LIGHT_DIRECTION_Y = 1.0f;
float  COMMON_LIGHT_DIRECTION_Z = 1.0f;

float  COMMON_AMBIENT_LIGHT_R = 1.0f;
float  COMMON_AMBIENT_LIGHT_G = 1.0f;
float  COMMON_AMBIENT_LIGHT_B = 1.0f;

float  COMMON_DIFFUSE_LIGHT_R = 1.0f;
float  COMMON_DIFFUSE_LIGHT_G = 1.0f;
float  COMMON_DIFFUSE_LIGHT_B = 1.0f;

float  COMMON_SPECULAR_LIGHT_R = 1.0f;
float  COMMON_SPECULAR_LIGHT_G = 1.0f;
float  COMMON_SPECULAR_LIGHT_B = 1.0f;

LightHouseDemo::LightHouseDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LightHouseDemo)
{
    ui->setupUi(this);
    setCentralWidget(ui->openGLWidget);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timer()));
    timer->start(1);
    m_time.start();
#ifdef USE_DEFAULT_MENU_BAR
    pMenuBar = this->menuBar();
#else
    pMenuBar = new QMenuBar(this);
#endif
    pMenuChooseSeason = new QMenu(QStringLiteral("选择季节"),this);

    pActiontSeason1 = new QAction(QStringLiteral("春季"),this);
    pActiontSeason2 = new QAction(QStringLiteral("夏季"),this);
    pActiontSeason3 = new QAction(QStringLiteral("秋季"),this);
    pActiontSeason4 = new QAction(QStringLiteral("冬季"),this);

    pMenuChooseSeason->addAction(pActiontSeason1);
    pMenuChooseSeason->addAction(pActiontSeason2);
    pMenuChooseSeason->addAction(pActiontSeason3);
    pMenuChooseSeason->addAction(pActiontSeason4);

    pMenuBar->addMenu(pMenuChooseSeason);

    connect(pActiontSeason1,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason1_triggered);
    connect(pActiontSeason2,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason2_triggered);
    connect(pActiontSeason3,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason3_triggered);
    connect(pActiontSeason4,&QAction::triggered,this,&LightHouseDemo::On_actionChooseSeason4_triggered);

    ui->statusbar->setStyleSheet("font: 14pt ");



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
//    QString str = "F:/House_blender/house02.obj";
    qDebug()<<"load obj:"<<m_objname;
    ui->openGLWidget->LoadModel(m_objname.toStdString());
}

void LightHouseDemo::On_actionChooseSeason1_triggered()
{
    qDebug()<<"choose_season1";
    COMMON_LIGHT_DIRECTION_X = 2.0f;
    COMMON_LIGHT_DIRECTION_Y = 2.0f;
    COMMON_LIGHT_DIRECTION_Z = 1.3f;

    COMMON_AMBIENT_LIGHT_R = 0.5f;
    COMMON_AMBIENT_LIGHT_G = 0.5f;
    COMMON_AMBIENT_LIGHT_B = 0.5f;

    COMMON_DIFFUSE_LIGHT_R = 0.3f;
    COMMON_DIFFUSE_LIGHT_G = 0.3f;
    COMMON_DIFFUSE_LIGHT_B = 0.3f;

    COMMON_SPECULAR_LIGHT_R = 0.8f;
    COMMON_SPECULAR_LIGHT_G = 0.8f;
    COMMON_SPECULAR_LIGHT_B = 0.8f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason2_triggered()
{
    qDebug()<<"choose_season2";
    COMMON_LIGHT_DIRECTION_X = 1.0f;
    COMMON_LIGHT_DIRECTION_Y = 1.0f;
    COMMON_LIGHT_DIRECTION_Z = 0.8f;

    COMMON_AMBIENT_LIGHT_R = 0.6f;
    COMMON_AMBIENT_LIGHT_G = 0.6f;
    COMMON_AMBIENT_LIGHT_B = 0.6f;

    COMMON_DIFFUSE_LIGHT_R = 0.4f;
    COMMON_DIFFUSE_LIGHT_G = 0.4f;
    COMMON_DIFFUSE_LIGHT_B = 0.4f;

    COMMON_SPECULAR_LIGHT_R = 0.7f;
    COMMON_SPECULAR_LIGHT_G = 0.7f;
    COMMON_SPECULAR_LIGHT_B = 0.7f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason3_triggered()
{
    qDebug()<<"choose_season3";
    COMMON_LIGHT_DIRECTION_X = 2.0f;
    COMMON_LIGHT_DIRECTION_Y = 2.0f;
    COMMON_LIGHT_DIRECTION_Z = 1.3f;

    COMMON_AMBIENT_LIGHT_R = 0.5f;
    COMMON_AMBIENT_LIGHT_G = 0.5f;
    COMMON_AMBIENT_LIGHT_B = 0.5f;

    COMMON_DIFFUSE_LIGHT_R = 0.3f;
    COMMON_DIFFUSE_LIGHT_G = 0.3f;
    COMMON_DIFFUSE_LIGHT_B = 0.3f;

    COMMON_SPECULAR_LIGHT_R = 0.8f;
    COMMON_SPECULAR_LIGHT_G = 0.8f;
    COMMON_SPECULAR_LIGHT_B = 0.8f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::On_actionChooseSeason4_triggered()
{
    qDebug()<<"choose_season4";
    COMMON_LIGHT_DIRECTION_X = 0.5f;
    COMMON_LIGHT_DIRECTION_Y = 0.4f;
    COMMON_LIGHT_DIRECTION_Z = 0.3f;

    COMMON_AMBIENT_LIGHT_R = 0.4f;
    COMMON_AMBIENT_LIGHT_G = 0.4f;
    COMMON_AMBIENT_LIGHT_B = 0.4f;

    COMMON_DIFFUSE_LIGHT_R = 0.2f;
    COMMON_DIFFUSE_LIGHT_G = 0.2f;
    COMMON_DIFFUSE_LIGHT_B = 0.2f;

    COMMON_SPECULAR_LIGHT_R = 0.6f;
    COMMON_SPECULAR_LIGHT_G = 0.6f;
    COMMON_SPECULAR_LIGHT_B = 0.6f;

    qDebug()<< "LightDirection changed::"<<"("<<COMMON_LIGHT_DIRECTION_X<<","<<COMMON_LIGHT_DIRECTION_Y<<","<<COMMON_LIGHT_DIRECTION_Z<<")";
}

void LightHouseDemo::timer()
{
    if(hours >= 24)
    {
        hours = 0;
    }
    float time = (m_time.elapsed()/1000.0f * 30);

    if(time > 59.0f)
    {
       hours += 1;
       m_time.restart();
    }
//    if(time > 24)
//    {
//m_time.restart();
//    }
    QDateTime sysTime = QDateTime::currentDateTime();

    ui->statusbar->showMessage(QStringLiteral("时间") + QString::number(hours) + ":" + QString("%1").arg(time)/*sysTime.toString()*/);
}

QString LightHouseDemo::objname() const
{
    return m_objname;
}

void LightHouseDemo::setObjname(const QString &objname)
{
    m_objname = objname;
}

