/*Program to use of pointer variable*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=100;
int *b;
b=&a;
cout<<"Value of a= "<<a<<endl;
cout<<"Address of a= "<<&a<<endl;
cout<<"B= "<<b<<endl;
cout<<"*b= "<<*b<<endl;
cout<<"&b= "<<&b<<endl;
getch();
}
