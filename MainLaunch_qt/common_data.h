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

    void Test()
    {
        std::cout<<"Here is Singleton Test"<<std::endl;
    }

private:
    SingletonMan() {}

private:
    static SingletonMan *m_pSingleton;


};

SingletonMan *SingletonMan::m_pSingleton = new SingletonMan();

MobileData common_mobiledata;

#endif // COMMON_DATA_H
