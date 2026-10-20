/*Program to find odd numbers from an array elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],n,i;
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\nodd numbers are: \n";
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
cout<<a[i]<<" ";
}
}
getch();
}