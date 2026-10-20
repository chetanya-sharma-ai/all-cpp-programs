/*PROGRAM TO CHECK WEATHER A STRING IS PALLINDROME OR NOT*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char a[50],b[50];
cout<<"Enter a string: ";
gets(a);
strcpy(b,a);
strrev(a);
if(strcmp(b,a)==0)
cout<<"String "<<b<<" is pallindrome";
else
cout<<"String is NOT pallindrome";
getch();
}