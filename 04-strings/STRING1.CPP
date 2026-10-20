/*Program to copy one string to another*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char name[20];
char name1[20];
cout<<"Enter name: ";
gets(name);
strcpy(name1,name);
cout<<"Enetered name: "<<name<<endl;
cout<<"Name1: "<<name1;
getch();
}