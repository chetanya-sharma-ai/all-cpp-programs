/*Progrzm to print sum of two numbers using classs*/
#include<iostream.h>
#include<conio.h>
class demo
{
private:
int a,b,c;
public:
void getdata()
{
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
}
void showdata()
{
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
}
void sum()
{
c=a+b;
cout<<"Sum= "<<c<<endl;
}};
void main()
{
clrscr();
demo obj;
obj.getdata();
obj.showdata();
obj.sum();
getch();
}
