/*Multiple inheritance with  public visbility*/
#include<iostream.h>
#include<conio.h>
class employee
{
int id;
char name[20];
public:
void get()
{
cout<<"Enter id: ";
cin>>id;
cout<<"Enter name: ";
cin>>name;
}
void show()
{
cout<<"ID is: "<<id<<endl;
cout<<"NAme is : "<<name<<endl;
}
};
class detail
{
int salary;
char city[10];
public:
void get1()
{
cout<<"Enter salary: ";
cin>>salary;
cout<<"Enter city: ";
cin>>city;
}
void show1()
{
cout<<"Salary iss: "<<salary<<endl;
cout<<"city: "<<city<<endl;
}
};
class department : public employee,public detail
{
int deptno;
char deptname[10];
public:
void get2()
{
cout<<"Enter department no: ";
cin>>deptno;
cout<<"Enter department name: ";
cin>>deptname;
}
void show2()
{
cout<<"Depsrtment number is: "<<deptno<<endl;
cout<<"Department name is : "<<deptname<<endl;
}};
void main()
{
clrscr();
department obj;
obj.get();
obj.get1();
obj.get2();
obj.show();
obj.show1();
obj.show2();
getch();
}