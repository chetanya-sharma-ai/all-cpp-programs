/*Program to reverse a string without using strrev()*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char str[50];
int i,len=0;
cout<<"Enter a string: ";
gets(str);

while(str[len]!='\0')
len++;
cout<<"Reversed string= ";

for(i=len-1;i>=0;i--)
cout<<str[i];
getch();
}