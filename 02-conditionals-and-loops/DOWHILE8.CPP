/*Program to check number is prime or not*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,n;
clrscr();
cout<<"Enter any number: ";
cin>>n;

i=2;
do
{
if(n%i==0)
{
cout<<"Number is NOT prime";
getch();
exit(0);
}
i++;
}
while(i<=n/2);
cout<<"Number is prime";
getch();
}