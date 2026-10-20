/*Arithmatic overloading of multiply(*)*/
#include<iostream.h>
#include<conio.h>
class demo
{
int x;
public:
demo(int a)           //parametirized constructor
{
x=a;
}
void show()
{
cout<<x<<endl;
}
demo operator*(demo kobj)     //operator overloading
{
demo obj(0);
obj.x=x*kobj.x;
return obj;
}
};
void main()
{
clrscr();
demo obj1(30),obj2(20),obj3(0);
obj3=obj1*obj2;
cout<<"Multiplication= ";
obj3.show();
getch();
}