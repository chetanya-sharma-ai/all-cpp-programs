	/*Program to sort  array elements in ascending order
	using bubble sort*/
	#include<iostream.h>
	#include<conio.h>
	void main()
	{
	clrscr();
	int a[10],i,j,n,temp;
	cout<<"Enter number of elements";
	cin>>n;
	cout<<"Enter array elements";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(a[j]<a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
	}
	cout<<"Elements after sorting are \n";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;
	}
	getch();
	}