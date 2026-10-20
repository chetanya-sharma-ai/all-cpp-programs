/*dynamic memory allocation in case of array*/
#include<iostream.h>
#include<conio.h>
void main()
{
int *a;
int i,n;
clrscr();
cout<<"How many elements: ";
cin>>n;
a=new int[n];
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
{
cin>>*(a+i);
}
cout<<"The array elements are: "<<endl;
for(i=0;i<n;i++)
{
cout<<*(a+i)<<endl;
}
delete[]a;
getch();
}