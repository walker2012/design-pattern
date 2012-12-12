#include "Singleton.h"

Singleton* Singleton::singleton = NULL;  
Singleton* Singleton::GetInstance(const char * name)  
{  
    if(singleton == NULL) { 
        singleton = new Singleton();  
        cout<<"create instance,name = " << name <<endl;
    }
    return singleton;  
}
