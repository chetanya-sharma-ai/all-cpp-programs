/*Program to print 1-N even numbgers*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter the value of n: ";
cin>>n;

i=1;
while(i<=n)
{
if(i%2==0)
cout<<i<<endl;
i++;
}
getch();
}
