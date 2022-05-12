#include "deleteitem_btn.h"
#include <QDebug>
#include <QSqlQuery>
#include "common_data.h"
deleteitem_btn::deleteitem_btn(QWidget *parent) : QPushButton(parent)
{

}

void deleteitem_btn::mousePressEvent(QMouseEvent *e)
{

    QString sql = "UPDATE rooms SET buy_flag = (0) WHERE id = :a1;";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":a1", house_id);
    if(query.exec())
    {
        qDebug()<<"deleteitem_btn : sql update success";
    }
    QString sql_delete = "DELETE FROM bought WHERE house_id = :a2;";
    QSqlQuery query_delete;
    query_delete.prepare(sql_delete);
    query_delete.bindValue(":a2", house_id);
    if(query_delete.exec())
    {
        qDebug()<<"deleteitem_btn : sql delete success";
    }



}


int deleteitem_btn::getHouse_id() const
{
    return house_id;
}

void deleteitem_btn::setHouse_id(int value)
{
    house_id = value;

}
