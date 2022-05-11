#include "houseinfor.h"
#include "ui_houseinfor.h"
#include <QSqlQuery>
#include <QDebug>
#include "common_data.h"
#include <QMessageBox>
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
    if(!SingletonMan::GetMobileDataInstance()->getWho())
    {
        QMessageBox::about(NULL, QStringLiteral("消息"), QStringLiteral("您是房东，无法签定租房合同"));
        return;
    }
    QString sql = "UPDATE rooms SET buy_flag = (1) WHERE id = :a1;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", m_houseid);
    if(query.exec())
    {
        qDebug()<<"houseinfor : sql update success";
    }

    QString sql_insert = "INSERT INTO tenants_buy (id, landlordsid, buy_tenants) VALUES (:a2, :a3, :a4); ";
    QSqlQuery query_insert;
    query_insert.prepare(sql_insert);
    query_insert.bindValue(":a2", m_houseid);
    query_insert.bindValue(":a3", m_landlordsid);
    query_insert.bindValue(":a4", SingletonMan::GetMobileDataInstance()->username());
    if(query_insert.exec())
    {
        qDebug()<<"houseinfor : sql insert success";
    }





}

QString houseinfor::landlordsid() const
{
    return m_landlordsid;
}

void houseinfor::setLandlordsid(const QString &landlordsid)
{
    m_landlordsid = landlordsid;
}

void houseinfor::on_pushButton_clicked()
{

}
