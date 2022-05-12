#include "houseinfor.h"
#include "ui_houseinfor.h"
#include <QSqlQuery>
#include <QDebug>
#include "common_data.h"
#include <QMessageBox>
#include <QDateTime>
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
    QString house_name = "";
    QString house_price = "";
    QString sql_select = "SELECT name, price FROM `rooms` where id =:a7;";
    QSqlQuery query_select;
    query_select.prepare(sql_select);
    query_select.bindValue(":a7", m_houseid);
    if(query_select.exec())
    {
        query_select.next();
        house_name += query_select.value(0).toString();
        house_price += query_select.value(1).toString();
        qDebug()<<"houseinfor : sql select price success";
    }
    QDateTime dateTime(QDateTime::currentDateTime());
    QString date = dateTime.toString("yyyy-MM-dd");

    QString sql_insert = "INSERT INTO bought (tenants_id, house_id, all_price, bought_time, house_name) VALUES (:a2, :a3, :a4, :a5, :a6); ";
    QSqlQuery query_insert;
    query_insert.prepare(sql_insert);
    query_insert.bindValue(":a2", SingletonMan::GetMobileDataInstance()->username());
    query_insert.bindValue(":a3", m_houseid);
    query_insert.bindValue(":a4", house_price);
    query_insert.bindValue(":a5", date);
    query_insert.bindValue(":a6", house_name);
    if(query_insert.exec())
    {
        qDebug()<<"houseinfor : bought sql insert success";
        this->~houseinfor();
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
    QString sql_insert = "INSERT INTO tenants_wish (id, landlordsid, buy_tenants_id) VALUES (:a2, :a3, :a4); ";
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
