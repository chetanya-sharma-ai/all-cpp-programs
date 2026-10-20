/*program to check a number is positive negative or zero*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num;
cout<<"Enteer the number: ";
cin>>num;
if (num>0)
{
cout<<"Number is positive";
}
else if(num<0)
{
cout<<"Number is Negative";
}
else
{
cout<<"Number is zero";
}
getch();
}