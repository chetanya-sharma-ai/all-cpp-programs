/*Program to print division of thwo numbers*/
#include<iostream.h>
#include<conio.h>
float div(float a, float b);
void main()
{
clrscr();
float a,b,c;
cout<<"Enter the value of a  and b: ";
cin>>a>>b;
c=div(a,b);
cout<<"Division of numbers: "<<c;
getch();
}
float div(float a, float b)
{
return(a/b);
}