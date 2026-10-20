/*Array of class type*/
#include<iostream.h>
#include<conio.h>
class employee
{
private:
int id;
char name[20];
float salary;
char city[20];
char phno[15];
public:
void getdata()
{
cout<<"Enter emoloyee ID: ";
cin>>id;
cout<<"Enter employee name: ";
cin>>name;
cout<<"Enter salary: ";
cin>>salary;
cout<<"Enter phione numebr: ";
cin>>phno;
}
void showdata()
{
cout<<"Employee ID: "<<id<<endl;
cout<<"Employee name: "<<name<<endl;
cout<<"Salary: "<<salary<<endl;
cout<<"PHone number: "<<phno<<endl;
}
};
void main()
{
clrscr();
employee emp[10];
int i,n;
cout<<"How many employees: ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter data of employee: "<<i+1<<endl;
emp[i].getdata();
}
for(i=0;i<n;i++)
{
cout<<"\nDaata of emplpyee: "<<i+1<<endl;
emp[i].showdata();
}
getch();
}
