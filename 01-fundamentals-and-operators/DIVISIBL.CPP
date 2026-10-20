/*to check number is divisible by 5 or not*/
#include<iostream.h>
#include<conio.h>
void main()
{
int num;
clrscr();
cout<<"enter a number: ";
cin>>num;

if(num%5==0)
{
cout<<"The number is DIVISIBLE by 5";
}
else
{
cout<<"The number is NOT DIVISIBLE by 5";
}
getch();
}