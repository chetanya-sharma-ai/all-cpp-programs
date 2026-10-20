/*Program to find factorial of a number using do while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1;
long fact=1;
cout<<"Enetr the value of n: ";
cin>>n;
do
{
fact=fact*i;
i++;
}
while(i<=n);
cout<<"Factorial= "<<fact;

getch();
}
