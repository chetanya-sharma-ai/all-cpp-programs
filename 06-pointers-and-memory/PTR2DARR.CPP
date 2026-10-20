/*Program to use pointer variable with 2 dimensional array*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[2][2]={10,8,20,15};
int *b;
b=&a[0][0];
clrscr();
cout<<"b="<<b<<endl;
cout<<"*b="<<*b<<endl;
b++;
cout<<"b="<<b<<endl;
cout<<"*b="<<*b<<endl;
b++;
cout<<"b="<<b<<endl;
cout<<"*b="<<*b<<endl;
b++;
cout<<"b="<<b<<endl;
cout<<"*b="<<*b<<endl;
getch();
}