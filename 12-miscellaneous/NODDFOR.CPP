/*program ot print 1-n even numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n;
cout<<"Enter the value of n: ";
cin>>n;

for(i=1;i<=n;i++)
{
if(i%2!=0)
cout<<i<<endl;
}
getch();
}