/*Program to find smalles of three number using nested if*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter the value of a,b and c";
cin>>a>>b>>c;
if(a<b)
{
if(a<c)
cout<<"A is smallest";
else
cout<<"C is smallest";
}
else
{
if(b<c)
cout<<"B is smallest";
else
cout<<"C is smallest";
}
getch();
}