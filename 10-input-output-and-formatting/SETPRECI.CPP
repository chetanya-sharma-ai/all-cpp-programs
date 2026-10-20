/*program to use setpricision manipulator*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
float a=123.874829;
cout<<a<<endl;
cout<<setprecision(3)<<a<<endl;
cout<<setprecision(2)<<a<<endl;
getch();
}