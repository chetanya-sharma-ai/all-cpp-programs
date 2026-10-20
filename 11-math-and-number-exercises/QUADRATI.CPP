/*Program to find roots of quadratic equation*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,r1,r2;
clrscr();
cout<<"enter the value of a: ";
cin>>a;
cout<<"enter the value of b: ";
cin>>b;
cout<<"Enter the value of c: ";
cin>>c;

d=b*b-a*a*c;
if(d<0)
{
cout<<"Roots are imaginary";
}
else
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);

cout<<"Root 1= "<<r1<<endl;
cout<<"Root 2= "<<r2;
}
getch();
}