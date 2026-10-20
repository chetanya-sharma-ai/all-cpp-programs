/*program to suse comparison of two strings*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char name[20];
char name1[20];
int x;
cout<<"Enter name: ";
gets(name);
cout<<"Enter name1; ";
gets(name1);
x=strcmp(name,name1);
if(x==0)
cout<<"Both strings are equAL";
else
cout<<"Both strings are NOT equal";
getch();
}
