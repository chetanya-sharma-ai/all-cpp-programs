/*Reading contensts of a file using ifstream*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
ifstream f("sharma");
char name[50];
int rollno;
cout<<"Reading contents of the file: "<<endl;
f>>name;
f>>rollno;
cout<<"Contents of the file are: "<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Roll no: "<<rollno<<endl;
f.close();
getch();
}