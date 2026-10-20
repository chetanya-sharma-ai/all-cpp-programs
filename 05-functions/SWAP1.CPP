/*Swapping of two numbers without using third variable*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

cout<<"\nBefore swapping: \n";
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping: "<<endl;
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;
getch();
}