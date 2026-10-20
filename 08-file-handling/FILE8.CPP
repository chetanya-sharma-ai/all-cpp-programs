/*Use of get and put fucntion*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
void main()
{
char string[50];
int i;
char ch;
int len;
fstream f;
clrscr();
cout<<"Enter string: ";
gets(string);
len=strlen(string);
f.open("chetanya1",ios::app);
for(i=0;i<len;i++)
f.put(string[i]);
f.open("chetanya1",ios::in);
for(i=0;i<len;i++)
f.get(string[i]);
cout<<string;
getch();
}