/*function with no arguments and but return value*/
#include<iostream.h>
#include<conio.h>
int sum();
void main()
{
clrscr();
int c;
c=sum();
cout<<"Sum: "<<c;
getch();
}
int sum()
{
int a,b;
cout<<"Enter the  vlaue of a and b: ";
cin>>a>>b;
return(a+b);
}