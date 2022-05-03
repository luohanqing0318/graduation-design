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

void MobileData::setAge(int age)
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


