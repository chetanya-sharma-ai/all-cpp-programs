/*Program to use nested  class*/
#include<iostream.h>
#include<conio.h>
class student
{
private:
int rollno;
int marks;
public:
void getdata()
{
cout<<"enter rollno: ";
cin>>rollno;
cout<<"Enter marks: ";
cin>>marks;
}
void showdata()
{
cout<<"\n Roll no is "<<rollno<<endl;
cout<<"Marks is "<<marks<<endl;
}
class detail
{
private:
int fees;
char name[20];
public:
void getdetail()
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter fees: ";
cin>>fees;
}
void showdetail()
{
cout<<"Name is: "<<name<<endl;
cout<<"Fees is: "<<fees<<endl;
}
};
};
void main()
{
clrscr();
student :: detail std1;
student std;
std.getdata();
std1.getdetail();
std.showdata();
std1.showdetail();
getch();
}