/*pointer expression*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a;  /*integer variable*/
int *b; /*pointer variable*/
int c;
clrscr();
a=10;
       b=&a;
       c=*b+2;
cout<<"a="<<a<<endl;
cout<<"&a="<<(unsigned)&a<<endl;
cout<<"b="<<(unsigned)b<<endl;
cout<<"c="<<c<<endl;
cout<<"++b="<<(unsigned)++b<<endl;
getch();
}