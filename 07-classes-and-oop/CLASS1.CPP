/*class with public visibility mode*/
#include<iostream.h>
#include<conio.h>
class data
{
public:
int a,b;
};
void main()
{
clrscr();
data obj;
obj.a=10;
obj.b=15;
cout<<"a="<<obj.a<<endl;
cout<<"b="<<obj.b;
getch();
}

