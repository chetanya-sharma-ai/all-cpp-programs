/*Pointer using array*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int *b,i;
	clrscr();
	b=a;
	for(i=0;i<5;i++)
	{
	cout<<*(b+i)<<endl;
	}
	getch();
	}
