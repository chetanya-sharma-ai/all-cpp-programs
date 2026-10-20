/*use of ifstream and ofstream*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
ofstream f("demo");
char name[50];
int rollno;
cout<<"Enter you name: ";
gets(name);
cout<<"Enter your rollno: ";
cin>>rollno;
f<<name<<endl;
f<<rollno<<endl;
f.close();
ifstream f1("demo");
cout<<"Reading details from the file: "<<endl;
f1>>name;
f1>>rollno;
cout<<"Contents of the file are: "<<endl;
cout<<" Name: "<<name<<endl;
cout<<"Rollno: "<<rollno;
f1.close();
getch();
}