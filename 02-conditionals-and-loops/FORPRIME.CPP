/*Program to check prime or not*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter any number: ";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
cout<<"Number is NOT prime";
exit(0);
}
}
cout<<"Number is prime";
getch();
}