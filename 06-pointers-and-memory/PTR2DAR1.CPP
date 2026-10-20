/* Pointer with 2 dimensional array*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[2][2]={10,14,56,20};
int *b;
b=&a[0][0];
clrscr();
cout<<"&a[0][0]="<<&a[0][0]<<endl;
cout<<"b="<<b<<endl;
cout<<"*b="<<*b<<endl;
cout<<"b[0][0]="<<(*(b+0))<<endl;
cout<<"b[0][1]="<<(*(b+1))<<endl;
cout<<"b[1][0]="<<(*(b+2))<<endl;
cout<<"b[1][1]="<<(*(b+3))<<endl;
getch();
}
