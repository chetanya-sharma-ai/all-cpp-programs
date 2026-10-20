/*Program to use set base manipulator*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int a;
cout<<"Enter the value of a= ";
cin>>a;
cout<<"Decimal base= "<<setbase(10)<<a<<endl;
cout<<"octal base= "<<setbase(8)<<a<<endl;
cout<<"Hexadecimal base= "<<setbase(16)<<a<<endl;
getch();
}
