/*pure virtual function*/
#include<iostream.h>
#include<conio.h>
class A
{
public:
int a;
virtual void show()=0;  //pure virtual function
};
class B:public A
{
public:
int b;
void show()
{
a=10;
b=5;
cout<<"A is: "<<a<<endl;
cout<<"B is: "<<b<<endl;
}
};
void main()
{
B obj;
clrscr();
obj.show();
getch();
}