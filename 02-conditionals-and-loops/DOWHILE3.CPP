/*Program to find sum of n natural numbers using do while*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int n,i=1,sum=0;
cout<<"Enetr the value of n: ";
cin>>n;
do
{
sum=sum+i;
i++;
}
while(i<=n);
cout<<"Sum= "<<sum;

getch();
}
