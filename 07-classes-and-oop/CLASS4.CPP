/*Program to use private visibility  mode*/
#include<iostream.h>
#include<conio.h>
class student
{
private:
int rollno;
char name[20];
float marks;
public:
void getdata()
{
cout<<"Enter rollno: ";
cin>>rollno;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter marks: ";
cin>>marks;
}
void showdata()
{
cout<<"Roll no:"<<rollno<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Marks: "<<marks<<endl;
}
};
void main()
{
clrscr();
student std;
std.getdata();
std.showdata();
getch();
}