/*Program to print  your name n times using while loop*/
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
cout<<"Enter the value of n: ";
cin>>n;
while(i<=n)
{
cout<<name<<endl;
i++;
}
getch();
}

