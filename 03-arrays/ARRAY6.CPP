/*Program to print and find smaller number from n array elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,n,min;
clrscr();
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"enter the array elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
min=a[0];
for(i=1;i<n;i++)
if(a[i]<min)
min=a[i];
cout<<"Minimum number is: "<<min<<endl;
getch();
}