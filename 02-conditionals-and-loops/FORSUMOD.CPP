/*Program to print sum of first n odd numbers*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
cout<<"Enter the vlue of n: ";
cin>>n;

for(i=1;i<=n;i++)
{
if(i%2!=0)
sum=sum+i;
}
cout<<"Sum of first "<<n<<" odd numbers= "<<sum;
getch();
}

