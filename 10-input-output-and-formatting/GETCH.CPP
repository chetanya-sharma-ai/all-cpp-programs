/*Use of getch()*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char grade;
cout<<"Enter the grade: ";
grade=getch();
cout<<endl<<"Entered character= ";
putchar(grade);
getch();
}