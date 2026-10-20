/*Program to print series x2/2,x3/3,x4/4........xn/n: */
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
cout<<"Enter the value of n: ";
cin>>n;
for(i=1;i<=n;i++)
{
sum=sum+pow(x,i);
}
cout<<"Sum of series= "<<sum;
getch();
}
