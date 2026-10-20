/*Program to count number of positive, negative and zeroes*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],n,i;
int pos=0,neg=0,zero=0;
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
if(a[i]>0)
pos++;
else if(a[i]<0)
neg++;
else
zero++;
}
cout<<"\nNumber of positive elements are: "<<pos;
cout<<"\nNumber of negative elements are: "<<neg;
cout<<"\nNumber of zeroes elements are: "<<zero;

getch();
}