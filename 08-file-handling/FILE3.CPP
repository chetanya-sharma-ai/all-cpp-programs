/*USE OF IFSTREAM TO READ CONTENTS OF A FILE*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
ifstream f("chetanya");
char ch;
cout<<"Contents of file are: ";
while(f)
{
f.get(ch);
cout<<ch;
}
f.close();
getch();
}