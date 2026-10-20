/*program to find greater of three number using if else ladder*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the value of a,b and c: ";
cin>>a>>b>>c;

if(a>b && a>c)
{
cout<<"A is greater";
}
else if(b>a && b>c)
{
cout<<"B is greater";
}
else
{
cout<<"C is greater";
}
getch();
}