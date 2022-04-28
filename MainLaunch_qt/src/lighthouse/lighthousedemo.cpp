#include "lighthousedemo.h"
#include "ui_lighthousedemo.h"
#include <QFileDialog>
LightHouseDemo::LightHouseDemo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LightHouseDemo)
{
    ui->setupUi(this);
    setCentralWidget(ui->openGLWidget);
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
