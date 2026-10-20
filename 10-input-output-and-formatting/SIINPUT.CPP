/*Program to print simple interest*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float p,r,t,si;
cout<<"Enter the principal: ";
cin>>p;
cout<<"Enter the rate of interest: ";
cin>>r;
cout<<"Enter the time in years: ";
cin>>t;
si=(p*r*t)/100;
cout<<"Simple inetrest: "<<si;
getch();
}