/*Program to print sum of first n natural numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
cout<<"Enter the vlue of n: ";
cin>>n;

for(i=1;i<=n;i++)
{
sum=sum+i;
}
cout<<"Sum of n natural numbers is "<<sum;
getch();
}

