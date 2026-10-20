/*Program to print sum and average of n array elements*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],n,i,sum=0;
float avg;
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
{
cin>>a[i];
sum=sum+a[i];
}
avg=(float)sum/n;
cout<<"\nSum= "<<sum<<endl;
cout<<"\nAverage= "<<avg;
getch();
}