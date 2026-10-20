/*Program to concatenate two strings*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char fname[20];
char lname[20];
clrscr();
cout<<"Enter first name: ";
gets(fname);
cout<<"Enter last name: ";
gets(lname);
strcat(fname,lname);         //strcat is the inbuilt function of string
cout<<"Concatenated string is: "<<fname;
getch();
}