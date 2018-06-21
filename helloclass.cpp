#include<iostream>
#include"helloclass.h"
using namespace std;
HelloClass::HelloClass()
{
cout<<"I am being created"<<endl;
};
HelloClass::~HelloClass()
{
cout<<"I am being destoryed"<<endl;
};
void HelloClass::sayHello()
{
cout<<"Hello Class!!!!"<<endl;
};

