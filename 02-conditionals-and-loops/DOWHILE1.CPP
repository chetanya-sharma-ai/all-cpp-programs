/*Program to print 1 to  n natural numbers using do while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1;
cout<<"Enter the value of n: ";
cin>>n;

do
{
cout<<i<<" ";
i++;
}
while(i<=n);
getch();
}