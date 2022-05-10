#include "addhouse.h"
#include "ui_addhouse.h"
#include <QFileDialog>
#include <QImage>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>
#include "common_data.h"
addHouse::addHouse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addHouse)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem(QStringLiteral("月付"));
    ui->comboBox_2->addItem(QStringLiteral("季付"));
    ui->comboBox_2->setCurrentIndex(0);

    ui->comboBox->addItem(QStringLiteral("合租"));
    ui->comboBox->addItem(QStringLiteral("整租"));
    ui->comboBox->addItem(QStringLiteral("房东直租"));
    ui->comboBox->setCurrentIndex(0);


    m_pligghthousedemo = new LightHouseDemo();

}

addHouse::~addHouse()
{
    delete ui;
}

void addHouse::on_pushButton_4_clicked()
{
    int kind = ui->comboBox->currentIndex();
    int buy_flag = ui->comboBox_2->currentIndex();
    QByteArray data;
    QString path = m_picturename;
    QFile* file=new QFile(path); //fileName为二进制数据文件名
    file->open(QIODevice::ReadOnly);
    data = file->readAll();
    file->close();
    QVariant var(data);

    m_housename = ui->lineEdit_2->text();
    m_prices = ui->lineEdit->text().toInt();

    QString sql = "INSERT INTO rooms (name, landlordsid, picture, price, kind, objname, buy_kind) VALUES (:a1, :a7, :a2, :a3, :a4, :a5, :a6);";

    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", m_housename);
    query.bindValue(":a7", SingletonMan::GetMobileDataInstance()->username());
    query.bindValue(":a2", var);
    query.bindValue(":a3", m_prices);
    query.bindValue(":a4", kind);
    query.bindValue(":a5", m_objname);
    query.bindValue(":a6", buy_flag);
    if(query.exec())
    {
        qDebug()<<"addhouse : sql insert success";
    }



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
           m_picturename = filename;
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

void addHouse::on_pushButton_2_clicked()
{
    QString str = QFileDialog::getOpenFileName(this, "选择文件", "" , "OBJ(*.obj);;FBX(*.fbx);;ALL FILES(*.*)");
    m_pligghthousedemo->setObjname(str);
    m_objname = str;
}

void addHouse::on_pushButton_clicked()
{
    m_pligghthousedemo->show();
}

QString addHouse::objname() const
{
    return m_objname;
}

void addHouse::setObjname(const QString &objname)
{
    m_objname = objname;
}
