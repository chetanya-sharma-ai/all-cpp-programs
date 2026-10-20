/*Defining members outside the class*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
private:
int rollno;
char name[50];
int marks;
public:
void  getdata();
void showdata();
};     //end of class

void student::getdata()
{
cout<<"enter rollbo: ";
cin>>rollno;
cout<<"Enter name: ";
gets(name);
cout<<"Enter marks: ";
cin>>marks;
}
void student::showdata()
{
cout<<"Rollno is: "<<rollno<<endl;
cout<<"Name is: "<<name<<endl;
cout<<"Marks obtained: "<<marks;
}
void main()
{
clrscr();
student std;     //class name object name
std.getdata();
std.showdata();
getch();
}
