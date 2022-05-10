#include "houseinfor_btn.h"
#include <QSqlQuery>
#include <QDebug>
houseinfor_btn::houseinfor_btn(QWidget *parent) : QPushButton(parent)
{
    m_phouseinfor_widget = new houseinfor();
}

void houseinfor_btn::mousePressEvent(QMouseEvent *e)
{
    m_phouseinfor_widget->setHouseid(m_houseid);
    m_phouseinfor_widget->setLandlordsid(m_landlordsid);

    QString sql;

        sql = "SELECT name, age, phone FROM `landlords` WHERE username = :username;";


    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":username", m_landlordsid);
    if(query.exec())
    {
        qDebug()<<"houseinfor_btn : sql select success";
        while (query.next()) {
                QString sqlusername = query.value(0).toString();
                QString sqlage = query.value(1).toString();
                QString sqlphone = query.value(2).toString();
                m_phouseinfor_widget->SetUIName(sqlusername);
                m_phouseinfor_widget->SetUIAge(sqlage);
                m_phouseinfor_widget->SetUIPhone(sqlphone);
        }


        }




    m_phouseinfor_widget->show();
}



int houseinfor_btn::houseid() const
{
    return m_houseid;
}

void houseinfor_btn::setHouseid(int houseid)
{
    m_houseid = houseid;
}

QString houseinfor_btn::landlordsid() const
{
    return m_landlordsid;
}

void houseinfor_btn::setLandlordsid(const QString &landlordsid)
{
    m_landlordsid = landlordsid;
}
