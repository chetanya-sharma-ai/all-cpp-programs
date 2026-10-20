/*call by reference*/
#include<iostream.h>
#include<conio.h>
void change(int &a);
void main()
{
int a=5;
clrscr();
cout<<"a is before function call: "<<a<<endl;
change(a);
cout<<"a is after function call: "<<a<<endl;
getch();
}
void change(int &a)
{
a=a+10;
cout<<"a is: "<<a<<endl;
}