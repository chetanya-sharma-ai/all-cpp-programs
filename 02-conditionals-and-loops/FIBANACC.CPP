/*program to print fibonnaci series*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,a=0,b=1,c=0;
cout<<"Enter the numeber of terms: ";
cin>>n;
cout<<"Fibonacci series: ";
for(i=2;i<=n;++i)
{
cout<<c<<" "<<endl;
a=b;
b=c;
c=a+b;
}
getch();
}
