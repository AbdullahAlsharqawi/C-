
#include <iostream>
#include<string.h>
using namespace std;

#include "log.h"


    void log::getid()
    {
        cout<<"Enter your id:";
        gets(id);
        cout<<"\nEnter the password:";
        gets(password);
        strcpy(pass,password);
    }
    void log::displayid()
    {
        cout<<"Id:";
        puts(id);
        cout<<"Password:";
        puts(pass);
    }

