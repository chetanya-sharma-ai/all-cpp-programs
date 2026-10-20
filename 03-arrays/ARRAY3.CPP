/*Program to read and print array elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a[10],i,n;
cout<<"Enter the number of elements: "<<endl;
cin>>n;
cout<<"Enter the array elements: "<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"Array elements are: "<<endl;
for(i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
getch();
}

