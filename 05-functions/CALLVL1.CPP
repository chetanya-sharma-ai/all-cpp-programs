/*Progra to call by value*/
#include<iostream.h>
#include<conio.h>
int sum(int a,int b);
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the value of a & b: ";
cin>>a>>b;
cout<<"Before function call a: "<<a<<endl;
cout<<"Before fuunction call b: "<<b<<endl;
c=sum(a,b);
cout<<"Sum is: "<<c<<endl;
cout<<"After function call a: "<<a<<endl;
cout<<"After function call b: "<<b<<endl;
getch();
}
int sum(int x,int y)
{
x+=10;
y+=20;
return (x+y);
}