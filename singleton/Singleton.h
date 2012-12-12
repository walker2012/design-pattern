
/// @file Singleton.h
/// @brief 
/// @author yanbin.yuan@renren-inc.com
/// @version 1.0
/// @date 2012-12-12

#include <iostream>
using namespace std;


class Singleton    
{  
    public:  
        static Singleton* GetInstance(const char* name);  
        void Show() {}  
//    protected: //必须为保护，如果是私有属性，子类无法访问父类的构造函数  
//        Singleton() {}  
    private:  
        Singleton() {}  
        static Singleton *singleton; //唯一实例的指针  
};
