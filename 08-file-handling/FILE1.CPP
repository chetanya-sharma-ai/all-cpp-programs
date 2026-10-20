/*Use of ofstream to write contents of a file*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
clrscr();
ofstream f("chetanya");
char string[100];
cout<<"Enter any string: ";
gets(string);
f<<string<<endl;
f.close();
getch();
}