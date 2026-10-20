/*Program to print ad fid maximum number from n array elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],i,n,max;
clrscr();
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"enter the array elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
max=a[0];
for(i=1;i,n;i++)
if(a[i]>max)
max=a[i];
cout<<"Maximum number is: "<<max<<endl;
getch();
}