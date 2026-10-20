/*prog to check student is pass or fail*/
#include<iostream.h>
#include<conio.h>
void main()
{
int marks;
clrscr();
cout<<"Enter the marks: ";
cin>>marks;

if(marks>=33)
{
cout<<"Student is pass";
}
else
{
cout<<"Student is fail";
}
getch();
}