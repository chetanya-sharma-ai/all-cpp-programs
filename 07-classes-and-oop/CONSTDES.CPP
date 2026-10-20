/*Inheritance of constructor and destructor*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
A()
{
cout<<"A is constructor"<<endl;
}
~A()
{
cout<<"A is destructor"<<endl;
}
};
class B:public A
{
public:
B()
{
cout<<"B constructor"<<endl;
}
~B()
{
cout<<"B destructor"<<endl;
}
};
class C:public B
{
public:
C()
{
cout<<"C constructor"<<endl;
}
~C()
{
cout<<"C destructor"<<endl;
}
};
void main()
{
clrscr();
C obj;
}