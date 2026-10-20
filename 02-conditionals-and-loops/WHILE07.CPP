/*Program to print sum of first N odd numbgers*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,sum=0;
cout<<"Enter the value of n: ";
cin>>n;

i=1;
while(i<=n)
{
if(i%2!=0)
sum=sum+i;
i++;
}
cout<<"Sum  of first n odd number= "<<sum;
getch();
}
