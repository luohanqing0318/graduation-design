#include "myinformation.h"
#include "ui_myinformation.h"
#include "common_data.h"
#include <QDebug>
myinformation::myinformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myinformation)
{
    ui->setupUi(this);
    m_changewidiget = new changepersonalinformation();
    m_name = SingletonMan::GetMobileDataInstance()->name();

    ui->label_3->setText(m_name);
    if(SingletonMan::GetMobileDataInstance()->getWho() == true)
    {
        ui->label_4->setText(QStringLiteral("租客"));
    }else{
         ui->label_4->setText(QStringLiteral("房东"));
    }
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_2_clicked()));
}

myinformation::~myinformation()
{
    delete ui;
}

void myinformation::GetName(QString name)
{
    m_name = name;
}

void myinformation::on_pushButton_2_clicked()
{

    m_changewidiget->show();

}
