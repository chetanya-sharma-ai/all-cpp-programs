/*Pragram to swap two numbers using class*/
#include<iostream.h>
#include<conio.h>
class swap
{
private:
int a,b,c;
public:
void  getdata()
{
cout<<"Enter two number: ";
cin>>a>>b;
}
void swapnum()
{
c=a;
a=b;
b=c;
}
void showdata()
{
cout<<"\nAfter swapping: ";
cout<<"\nA= "<<a;
cout<<"\nB= "<<b;
}
};
void main()
{
clrscr();
swap obj;
obj.getdata();
obj.swapnum();
obj.showdata();
getch();
}
