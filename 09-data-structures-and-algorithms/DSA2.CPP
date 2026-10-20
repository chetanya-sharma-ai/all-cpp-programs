/*Program to delete an array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,k,n,item,j;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=1;i<=n;i++)
{
cin>>a[i];}
cout<<"Enter the position from where you want to delete the item: ";
cin>>k;
item=a[k];
for(j=k;j<=n;j++)
a[j]=a[j+1];
n--;
cout<<"After deletion array  elements are: "<<endl;
for(i=1;i<=n;i++)
{
cout<<a[i]<<endl;}
cout<<"Deleted item is: "<<item;
getch();}