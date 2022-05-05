#ifndef MOBILEDATA_H
#define MOBILEDATA_H
#include <iostream>
#include <QString>
class MobileData
{
public:
    MobileData();
    ~MobileData();
    MobileData (const MobileData&) = delete;
    MobileData & operator = (const MobileData&) = delete;



    QString username() const;
    void setUsername(const QString &username);

    QString password() const;
    void setPassword(const QString &password);

    QString name() const;
    void setName(const QString &name);

    int age() const;
    void setAge(const int &age);

    QString phone() const;
    void setPhone(const QString &phone);

private:
    QString m_username;
    QString m_password;
    QString m_name;
    int m_age;
    QString m_phone;
};


#endif // MOBILEDATA_H
