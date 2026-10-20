/*Prog to fid sum of numbers using class by defining outside*/
#include<iostream.h>
#include<conio.h>
class demo
{
private:
int a,b,c;
public:
void getdata();
void sum();
};
void demo::getdata()
{
cout<<"Enter the value of first number: ";
cin>>a;
cout<<"Enter the value of second number: ";
cin>>b;
}
void demo::sum()
{
c=a+b;
cout<<"\nSum of two numbers: "<<c<<endl;
}
void main()
{
clrscr();
demo obj;
obj.getdata();
obj.sum();
getch();
}