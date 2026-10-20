/*Program to print employe id,name,salary,city and phone number using array within the class*/
#include<iostream.h>
#include<conio.h>
class employee
{
private:
char id[10];
char name[15];
char salary[10];
char city[15];
char phone[12];
public:
void getdata();
void showdata();
};
void employee :: getdata()
{
cout<<"Enter Employee ID: ";
cin>>id;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter salary: ";
cin>>salary;
cout<<"Enter city: ";
cin>>city;
cout<<"Enter  phone number: ";
cin>>phone;
}
void employee :: showdata()
{
cout<<"ID: "<<id<<endl;
cout<<"NAme: "<<name<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"Enter city: "<<city<<endl;
cout<<"Enter number: "<<phone<<endl;
}
void main()
{
clrscr();
employee std;
std.getdata();
std.showdata();
getch();
}
