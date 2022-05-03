#ifndef COMMON_DATA_H
#define COMMON_DATA_H

#include <iostream>

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
    SingletonMan() {}  // 构造函数（被保护）

private:
    static SingletonMan *m_pSingleton;  // 指向单例对象的指针

};

SingletonMan *SingletonMan::m_pSingleton = new SingletonMan();

#endif // COMMON_DATA_H
