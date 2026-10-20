/*funciton overriding*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
void show()
{
cout<<"This is class A"<<endl;
}
};
class B:public A
{
public:
void show()
{
cout<<"This is case B"<<endl;
}
};
void main()
{
B obj;
clrscr();
obj.A::show();
obj.B::show();

getch();
}