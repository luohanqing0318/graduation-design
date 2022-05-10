#include "addhouse.h"
#include "ui_addhouse.h"
#include <QFileDialog>
#include <QImage>
#include <QMessageBox>
#include <QDebug>
addHouse::addHouse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addHouse)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem(QStringLiteral("月付"));
    ui->comboBox_2->addItem(QStringLiteral("季付"));


    ui->comboBox->addItem(QStringLiteral("合租"));
    ui->comboBox->addItem(QStringLiteral("整租"));
    ui->comboBox->addItem(QStringLiteral("房东直租"));

    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushButton_3_clicked()));
}

addHouse::~addHouse()
{
    delete ui;
}

void addHouse::on_pushButton_4_clicked()
{

}

void addHouse::on_pushButton_3_clicked()
{
       QString filename;
       filename = QFileDialog::getOpenFileName(this,
                                             tr("选择图像"),
                                             "",
                                             tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
       if(filename.isEmpty())
       {
            return;
       }
       else
       {
           qDebug()<<filename;
           QImage* img=new QImage;

           if(! ( img->load(filename) ) ) //加载图像
           {
               QMessageBox::information(this,
                                        tr("打开图像失败"),
                                        tr("打开图像失败!"));
               delete img;
               return;
           }
           QImage* imgScaled = new QImage;
           *imgScaled=img->scaled(185,185,Qt::KeepAspectRatio);
           ui->label->setPixmap(QPixmap::fromImage(*imgScaled));
       }
}
