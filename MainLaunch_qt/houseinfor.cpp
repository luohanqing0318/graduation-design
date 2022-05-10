#include "houseinfor.h"
#include "ui_houseinfor.h"

houseinfor::houseinfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::houseinfor)
{
    ui->setupUi(this);
}

houseinfor::~houseinfor()
{
    delete ui;
}

void houseinfor::SetUIName(QString &name)
{
       ui->label_5->setText(name);
}

void houseinfor::SetUIAge(QString &age)
{
        ui->label_6->setText(age);
}

void houseinfor::SetUIPhone(QString &phone)
{
        ui->label_7->setText(phone);
}

int houseinfor::houseid() const
{
    return m_houseid;
}

void houseinfor::setHouseid(int houseid)
{
    m_houseid = houseid;
}

void houseinfor::on_pushButton_2_clicked()
{

}

QString houseinfor::landlordsid() const
{
    return m_landlordsid;
}

void houseinfor::setLandlordsid(const QString &landlordsid)
{
    m_landlordsid = landlordsid;
}
