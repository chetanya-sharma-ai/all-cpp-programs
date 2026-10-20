/*Program to print 1 to n natural numbers using while loop*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter value of n";
cin>>n;
i=1;
while(i<=n)
{
cout<<i<<"\t";
i++;
}
getch();
}