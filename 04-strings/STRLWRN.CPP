/*Program to change string to lower case without using strlwr()*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char str[50];
int i;
cout<<"Enter any string in lower case: ";
gets(str);
i=0;
while(str[i]!='\0')
{
if(str[i]>='a' && str[i]<='z')
{
str[i]=str[i]-32;
}
i++;
}
cout<<"String to upper case: "<<str;
getch();
}

