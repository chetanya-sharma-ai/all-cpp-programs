/*program to use setfill manipulator*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int a=1234;
cout<<setfill('*')<<setw(6)<<a<<endl;
cout<<setfill('#')<<setw(8)<<a<<endl;
cout<<setfill('Q')<<setw(10)<<a<<endl;
cout<<setfill('+')<<setw(12)<<a<<endl;
getch();
}