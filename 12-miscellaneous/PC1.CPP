/*Program to count length of a string*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char name[20];
int length;
clrscr();
cout<<"Enter name: ";
gets(name);              //using gets to include space in betweens string
length=strlen(name);     //strlen is the string fucntion
cout<<"Length of string: "<<length;
getch();
}
