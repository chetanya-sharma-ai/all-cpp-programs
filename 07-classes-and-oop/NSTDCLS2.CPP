/*Program to print id,name and salary, city and phnumber of employee using nested class*/
#include<iostream.h>
#include<conio.h>
class employee
{
private:
int id;
float salary;
public:
void getdata()
{
cout<<"Enter emplpyee ID: ";
cin>>id;
cout<<"Enter salary:";
cin>>salary;
}
void showdata()
{
cout<<endl<<"Employee Id: "<<id<<endl;
cout<<"Salary: "<<salary<<endl;
}
class detail
{
private:
char name[20];
char city[10];
char phone[15];
public:
void getdetail()
{
cout<<"Enter namee: ";
cin>>name;
cout<<"Enter city: ";
cin>>city;
cout<<"Enter phone number: ";
cin>>phone;
}
void showdetail()
{
cout<<"Name is: "<<name<<endl;
cout<<"Cityis:"<<city<<endl;
cout<<"phone number is: "<<phone<<endl;
}
};
};
void main()
{
clrscr();
employee :: detail e1;
employee e;
e.getdata();
e1.getdetail();
e.showdata();
e1.showdetail();
getch();
}