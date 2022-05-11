#include "tenants_buylist.h"
#include "ui_tenants_buylist.h"
#include <qDebug>
#include <QSqlQuery>
#include "common_data.h"
tenants_buylist::tenants_buylist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tenants_buylist)
{
    ui->setupUi(this);


}

tenants_buylist::~tenants_buylist()
{
    delete ui;
}

QString tenants_buylist::GetFindKind(int kind)
{
    QString thekind = "";
    if(kind == 0)
    {
        thekind += QString(QStringLiteral("合租"));

    }else if(kind == 1)
    {
        thekind += QString(QStringLiteral("整租"));
    }
    else if(kind == 2)
    {
        thekind += QString(QStringLiteral("房东直租"));
     }
    return thekind;
}

void tenants_buylist::UpdateList()
{

}

void tenants_buylist::mousePressEvent(QMouseEvent *e)
{

}

QString tenants_buylist::tenantsusername() const
{
    return m_tenantsusername;
}

void tenants_buylist::setTenantsusername(const QString &tenantsusername)
{
    m_tenantsusername = tenantsusername;
}

QList<int> tenants_buylist::houseid_list() const
{
    return m_houseid_list;
}

void tenants_buylist::setHouseid_list(const QList<int> &houseid_list)
{
    m_houseid_list = houseid_list;
}

void tenants_buylist::addHouseid_list(int house_id)
{
    m_houseid_list.append(house_id);
}


