#include"helloclass.h"
#include<iostream>
using namespace std;

helloclass::helloclass()
{cout<<"i am being created"<<endl;
}
helloclass::~helloclass()
{cout<<"i am being destroy"<<endl;
}
void helloclass::sayhello()
{cout<<"hello class!"<<endl;
}
