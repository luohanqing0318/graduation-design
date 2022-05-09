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



#endif // COMMON_DATA_H
