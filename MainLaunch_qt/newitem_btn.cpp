#include "newitem_btn.h"
#include <QDebug>
#include <QSqlQuery>
#include "common_data.h"
newitem_btn::newitem_btn(QWidget *parent) : QPushButton(parent)
{

}

void newitem_btn::mousePressEvent(QMouseEvent *e)
{
    LightHouseDemo *m_plighthouse;
    m_plighthouse = new LightHouseDemo();
    m_plighthouse->setObjname(m_objname);
    if(SingletonMan::GetMobileDataInstance()->HaveHouseId(house_id))
    {
        SingletonMan::GetMobileDataInstance()->AddWatchlist(house_id);
    }

    m_plighthouse->show();

}

QString newitem_btn::objname() const
{
    return m_objname;
}

void newitem_btn::setObjname(const QString &objname)
{
    m_objname = objname;

}

int newitem_btn::getHouse_id() const
{
    return house_id;
}

void newitem_btn::setHouse_id(int value)
{
    house_id = value;
    QString sql = "SELECT objname FROM `rooms` where id = :a1;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", value);
    if(query.exec())
    {
        while (query.next()) {
        m_objname = query.value(0).toString();
        }
    }
}
