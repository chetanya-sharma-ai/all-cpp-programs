/*Prog. to print 1-n natural numbers using do while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter value of n";
cin>>n;
i=1;
do
{
cout<<i<<"\t";
i++;
}while(i<=n);
getch();
}