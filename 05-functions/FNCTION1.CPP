/*Program to print product of three numbers using function*/
#include<iostream.h>
#include<conio.h>
int product(int a, int b, int c);
void main()
{
clrscr();
int a,b,c,d;
cout<<"Enter the value of a, b, c: ";
cin>>a>>b>>c;
d=product(a,b,c);
cout<<"Product of three numbers: "<<d;
getch();
}
int product(int a, int b, int c)
{
return(a*b*c);
}