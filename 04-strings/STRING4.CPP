/*use of strlwr()*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char name[20];
cout<<"Enter name is upper case: ";
gets(name);
strlwr(name);
cout<<"String is"<<name;
getch();
}