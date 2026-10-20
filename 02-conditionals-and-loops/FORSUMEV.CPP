/*Program to print sum of first n even numebrs: */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
cout<<"Enter the value of n: ";
cin>>n;

for(i=1;i<=n;i++)
{
sum=sum+(2*i);
}
cout<<"Sum of first "<<n<<" even numbers "<<sum;
getch();
}