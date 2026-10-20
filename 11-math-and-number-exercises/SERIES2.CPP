/*Program to print series x3/3,x5/5,x7/7........xn/n: */
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n;
float x,sum=0;
clrscr();
cout<<"Enter the value of x: ";
cin>>x;
cout<<"Enter the last odd power n: ";
cin>>n;
for(i=1;i<=n;i=i+2)
{
sum=sum+pow(x,i)/i;
}
cout<<"Sum of series= "<<sum;
getch();
}
