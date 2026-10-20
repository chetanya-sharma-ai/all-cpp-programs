/*Program to check whether a number is prime or not using while*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
int i,n;
clrscr();
cout<<"Enter any number:  ";
cin>>n;

i=2;
while(i<=n/2)
{
if(n%i==0)
{
cout<<"Number is not prime";
exit(0);
}
i++;
}
cout<<"Number is  prime";
getch();
}
