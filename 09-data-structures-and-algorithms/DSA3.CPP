/*program to search item using binary search*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10],n,i,item,beg,end,mid;
clrscr();
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enetr array elements ina scending order: ";
for(i=1;i<=n;i++)
{
cin>>a[i];}
cout<<endl<<"Enter element yout want to find ";
cin>>item;
beg=1;
end=n;
mid=(beg+end)/2;
while((beg<=end) && a[mid]!=item)
{
if(item<a[mid])
end=mid-1;
else
beg=mid+1;
mid=(beg+end)/2;
}
if(a[mid]==item)
cout<<"Item  "<<item<<" Found at location: "<<mid;
else
cout<<"Item NOT found.";
getch();}