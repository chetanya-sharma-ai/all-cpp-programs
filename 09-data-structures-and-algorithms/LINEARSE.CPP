	/*Program to find an item using linear search*/
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
	int a[10],n,i,item,loc;
	clrscr();
	cout<<"Enter number of elements";
	cin>>n;
	cout<<"Enter array elements";
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	}
	cout<<"Enter element you want to find";
	cin>>item;
	loc=0;
	for(i=1;i<=n;i++)
	{
	if(a[i]==item)
	{
	loc=i;
	}
	}
	if(loc>0)
	{
	cout<<"Item "<<item<<" found at location "<<loc;
	}
	else
	{
	cout<<"Item not found";
	}
	getch();
	}