/* Pointer with 2 dimensional array*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a[2][2]={10,14,56,20};
int *b;
int i;
b=&a[0][0];
clrscr();
cout<<"&a[0][0]="<<(unsigned)&a[0][0]<<endl;
cout<<"&b="<<(unsigned)&b<<endl;
cout<<"b="<<(unsigned)b<<endl;
cout<<"Array elements are"<<endl;
for(i=0;i<4;i++)
{
cout<<*(b+i)<<endl;
}
getch();
}

