/*Program to print rollno,name marks in 5 sub and their total*/
#include<iostream.h>
#include<conio.h>
class student
{
private:
int rollno,m1,m2,m3,m4,m5,total;
char name[25];
public:
void getdata()
{
cout<<"Enter rollno: ";
cin>>rollno;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter marks in physics: ";
cin>>m1;
cout<<"Enter marks in chemistry: ";
cin>>m2;
cout<<"Enter marks in mathematics: ";
cin>>m3;
cout<<"Enter marks in english: ";
cin>>m4;
cout<<"enter marks in computer: ";
cin>>m5;
}
void calculate()
{
total=m1+m2+m3+m4+m5;
}

void showdata()
{
cout<<"\nRollno: "<<rollno;
cout<<"\nName: "<<name;
cout<<"\nmarks in physics: "<<m1;
cout<<"\nMaarks in chemistry: "<<m2;
cout<<"\nmarks in mathematics: "<<m3;
cout<<"\nmakrs in english: "<<m4;
cout<<"\nMarks in computer: "<<m5;
cout<<"\nTotal marks: "<<total;
}
};
void main()
{
clrscr();

student s;
s.getdata();
s.calculate();
s.showdata();
getch();
}