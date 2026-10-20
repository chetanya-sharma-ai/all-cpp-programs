/*Program to quick sort*/
#include<iostream.h>
#include<conio.h>
int quick(int [], int , int);
void main()
{
clrscr();
int a[10],i,j,n,temp,beg,end,loc,top,lower[10],upper[10];
clrscr();
cout<<"Enter the number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=1;i<=n;i++)
{
cin>>a[i];
}
top=1;
lower[top]=1;
upper[top]=n;
while(top!=0)
{
beg=lower[top];
end=upper[top];
top--;
loc=quick(a,beg,end);
if(beg<loc-1)
{
top++;
lower[top]=beg;
upper[top]=loc-1;}
if(end>loc+1)
{
top++;
lower[top]=loc+1;
upper[top]=end;
}               //end of if
}              //end of while
cout<<endl;
cout<<"Elements after sorting are: \n";
for(i=1;i<=n;i++)
{
cout<<a[i]<<endl;
}
getch();
}
int quick(int a[],int left,int right)
{
int loc,temp;
loc=left;
while(1)           //right to left
{
while(a[loc]<=a[right] && loc!=right)
right--;
if(loc==right)
return(loc);
temp=a[loc];
a[loc]=a[right];
a[right]=temp;
loc=right;

while(a[left]<=a[loc] && loc!=left)           //left right
left++;
if(loc==left)
return(loc);
temp=a[loc];
a[loc]=a[left];
a[left]=temp;
loc=left;
}
}