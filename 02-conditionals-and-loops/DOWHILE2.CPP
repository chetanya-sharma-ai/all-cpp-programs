/*Program to print name n times using do while*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char name[50];
int n,i=1;

cout<<"Enter your name: ";
gets(name);
cout<<"Enter number of times to display: ";
cin>>n;
do
{
cout<<name<<"\t";
i++;
}
while(i<=n);
getch();
}
