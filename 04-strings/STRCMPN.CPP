/*program to compare two strings without using strcmp*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s1[50],s2[50];
int i=0;
cout<<"Enter the first string: ";
gets(s1);
cout<<"Enter the second string: ";
gets(s2);

while(s1[i]==s2[i] && s1[i]!='\0')
i++;
if(s1[i]==s2[i])
cout<<"Strings are equal";
else
cout<<"Strings are NOT equal";
getch();

}