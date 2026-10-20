/*Swapping of two numbers using third variable*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;

cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;

cout<<"\nBefore swapping: \n";
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;

c=a;
a=b;
b=c;

cout<<"After swapping: "<<endl;
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;
getch();

}