/*use of setw manipulator*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int a=9284;
cout<<setw(4)<<a<<endl;
cout<<setw(2)<<a<<endl;
cout<<setw(10)<<a<<endl;
cout<<setw(8)<<a<<endl;
getch();
}