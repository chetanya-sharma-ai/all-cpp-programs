/*even numbers 1-N using do while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=2;
cout<<"Enetr the value of n: ";
cin>>n;
do
{
cout<<i<<" ";
i=i+2;
}
while(i<=n);

getch();
}
