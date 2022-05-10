#include "newitem_btn.h"

newitem_btn::newitem_btn(QWidget *parent) : QPushButton(parent)
{
    m_plighthouse = new LightHouseDemo();
}

void newitem_btn::mousePressEvent(QMouseEvent *e)
{
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
