/*Use of ofstream*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
ofstream f("sharma");
char name[50];
int rollno;
cout<<"Enter your name: ";
gets(name);
cout<<"Enter your roll no: ";
cin>>rollno;
f<<name<<endl;
f<<rollno<<endl;
f.close();
getch();
}