/*Program to use forward and backward goto*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float x,y;
a1:
cout<<"Enter the value of x: ";
cin>>x;
if(x>0)
goto a2;
else
goto a1;
a2:
y=sqrt(x);
cout<<"Square root of "<<x<<" is "<<y;
getch();
}

