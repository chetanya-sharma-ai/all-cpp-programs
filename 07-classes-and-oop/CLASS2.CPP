/*Program to print id, name, salary, address and phone no of an employee using public visibiliy mode*/
#include<iostream.h>
#include<conio.h>
class employee
{
public:
int id;
char name[30];
float salary;
char address[60];
char phone[14];
};
void main()
{
clrscr();
employee obj;
cout<<"Enter employee ID: ";
cin>>obj.id;
cout<<"Enter employee NAME: ";
cin>>obj.name;
cout<<"Enter employee salary: ";
cin>>obj.salary;
cout<<"Enter employee address: ";
cin>>obj.address;
cout<<"Enter employee phone number: ";
cin>>obj.phone;

cout<<"\n\nEmployee details: ";
cout<<"\nID: "<<obj.id;
cout<<"\nNAME: "<<obj.name;
cout<<"\nSALARY: "<<obj.salary;
cout<<"\nADDRESS: "<<obj.address;
cout<<"\nPHONE NUMBER: "<<obj.phone;
getch();
}