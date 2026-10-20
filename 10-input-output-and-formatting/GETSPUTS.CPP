/*Program to  print your name using gets() puts()*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
char name[20];
clrscr();
cout<<"Enter name: ";
gets(name);
cout<<"My name is ";
puts(name);
getch();
}