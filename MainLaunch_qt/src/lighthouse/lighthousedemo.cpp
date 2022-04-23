#include "lighthousedemo.h"
#include "ui_lighthousedemo.h"

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
