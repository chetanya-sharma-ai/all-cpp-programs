/*Program to call by value*/
#include<iostream.h>
#include<conio.h>
void change(int a);
void main()
{
int a=5;
clrscr();
cout<<"A is before function call: "<<a<<endl;
change(a);
cout<<"A is after function call: "<<a<<endl;
getch();
}
void change(int a)
{
a=a+10;
cout<<"A is: "<<a<<endl;
}
