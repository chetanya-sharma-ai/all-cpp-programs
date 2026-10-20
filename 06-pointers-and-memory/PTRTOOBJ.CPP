/*Pointer and objects*/
#include<iostream.h>
#include<conio.h>
class employee
{
int id;
char name[20];
public:
void getdata()
{
cout<<"Enter id: ";
cin>>id;
cout<<"Enter name: ";
cin>>name;
}
void showdata()
{
cout<<"ID is: "<<id<<endl;
cout<<"Name is: "<<name<<endl;
}};
void main()
{
clrscr();
employee emp,*ptr;
emp.getdata();
emp.showdata();
ptr=new employee;     // pointer =new class_name  (here new is the keyword)
ptr->getdata();
ptr->showdata();
getch();
}

