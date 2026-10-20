/*Program ot print sum of n natural numbers using while loop*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
cout<<"Enter the value of n: ";
cin>>n;

i=1;
while(i<=n)
{
sum=sum+i;
i++;
}
cout<<"Sum of n natural numbers are= "<<sum;
getch();
}
