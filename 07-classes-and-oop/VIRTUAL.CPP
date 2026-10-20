/*virtual class*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
int a;
};
class B:virtual public A
{
public:
int b;
};
class C:virtual public A
{
public:
int c;
};
class D:public B,public C
{
public:
int d;
};
void main()
{
D obj;
clrscr();
obj.a=10;
obj.b=15;
obj.c=20;
obj.d=5;
cout<<"OBj.a= "<<obj.a<<endl;
cout<<"Obj.b= "<<obj.b<<endl;
cout<<"Obj.c= "<<obj.c<<endl;
cout<<"obj.d= "<<obj.d<<endl;
getch();
}