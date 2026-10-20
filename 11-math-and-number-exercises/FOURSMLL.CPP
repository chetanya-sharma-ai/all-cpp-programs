/*Program to print smaller of four number:*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
cout<<"Enter four numbers: ";
cin>>a>>b>>c>>d;

if(a<b && a<c && a<d)
{
cout<<"Smallest number is A= "<<a;
}
else if(b<a && b<c && b<d)
{
cout<<"Smallest number is B= "<<b;
}
else if(c<a && c<b && c<d)
{
cout<<"Smallest number is C= "<<c;
}
else
{
cout<<"Smallest number is D= "<<d;
}
getch();
}