#ifndef COMMON_DATA_H
#define COMMON_DATA_H

#include <iostream>
#include "mobiledata.h"

class SingletonMan
{
public:

    static SingletonMan* GetInstance()
    {
        return m_pSingleton;
    }
    static MobileData* GetMobileDataInstance()
    {
        return m_pMobileData;
    }

    void Test()
    {
        std::cout<<"Here is Singleton Test"<<std::endl;
    }

private:
    SingletonMan() {}

private:
    static SingletonMan *m_pSingleton;
    static MobileData * m_pMobileData;

};

SingletonMan *SingletonMan::m_pSingleton = new SingletonMan();
MobileData *SingletonMan::m_pMobileData = new MobileData();


#endif // COMMON_DATA_H
