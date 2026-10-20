/*Program to insert a new element into an array*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,j,k,n,item;
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=1;i<=n;i++)
{cin>>a[i];}
cout<<"Enter the position where you want to add the element: ";
cin>>k;
cout<<"Enter the element yout want to add: ";
cin>>item;
j=n;
while(j>=k)
{    a[j+1]=a[j];  j=j-1;        }
a[k]=item;
n=n+1;
cout<<"After insertion array elemetns are: "<<endl;
for(i=1;i<=n;i++)
{cout<<a[i]<<endl;
}
getch();
}