/*PROGRAM TO PRINT YOUR NAME USING 2-D ARRAY*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char name[10][15];
int i,n;
cout<<"How many students: ";
cin>>n;
cout<<"Enter names: ";
fflush(stdin);
for(i=0;i<n;i++)
{
gets(name[i]);
}
cout<<"Entered names are: "<<endl;
for(i=0;i<n;i++)
{
cout<<name[i]<<endl;
}
getch();
}
