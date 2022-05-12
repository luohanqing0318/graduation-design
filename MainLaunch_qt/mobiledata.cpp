#include "mobiledata.h"


MobileData::MobileData()
{
    m_username = "";
    m_password = "";
    m_name = "";
    m_age = 0;
    m_phone = "";
}

MobileData::~MobileData()
{

}

QString MobileData::username() const
{
    return m_username;
}

void MobileData::setUsername(const QString &username)
{
    m_username = username;
}

QString MobileData::password() const
{
    return m_password;
}

void MobileData::setPassword(const QString &password)
{
    m_password = password;
}

QString MobileData::name() const
{
    return m_name;
}

void MobileData::setName(const QString &name)
{
    m_name = name;
}

int MobileData::age() const
{
    return m_age;
}

void MobileData::setAge(const int &age)
{
    m_age = age;
}

QString MobileData::phone() const
{
    return m_phone;
}

void MobileData::setPhone(const QString &phone)
{
    m_phone = phone;
}

bool MobileData::getWho() const
{
    return who;
}

void MobileData::setWho(bool value)
{
    who = value;
}

QList<int> MobileData::getWatchlist() const
{
    return m_watchlist;
}



void MobileData::AddWatchlist(int value)
{
    m_watchlist.append(value);
}

bool MobileData::HaveHouseId(int value)
{
    if(m_watchlist.count(value) == 0)
    {
        return true;
    }
    return false;
}

QString MobileData::getSearch() const
{
    return m_search;
}

void MobileData::setSearch(const QString &search)
{
    m_search = search;
}


