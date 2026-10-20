/*Program to check whether a number is prime or not*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,n;
clrscr();
cout<<"Enter any number";
cin>>n;
for(i=2;i<=n/2;i++)      //memorize
{
if(n%i==0)
{
cout<<"Number is not prime";
exit(0);
}
}
cout<<"Number is  prime";
getch();
}

