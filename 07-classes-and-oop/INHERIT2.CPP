/*Program to print rollno, name, percentage, fees, using public and private mode in single inheritance*/
#include<iostream.h>
#include<conio.h>
class student
{
private:
int roll;
char name[30];
public:
void getstudent()
{
cout<<"Enter roll number :";
cin>>roll;
cout<<"Enter name: ";
cin>>name;
}
void showstudent()
{
cout<<"\nRoll number: "<<roll;
cout<<"\nName: "<<name;
}
};
class result : public student
{
private:
float percentage;
float fees;
public:
void getresult()
{
getstudent();
cout<<"Enter percentage: ";
cin>>percentage;
cout<<"Enter fees: ";
cin>>fees;
}
void showresult()
{
showstudent();
cout<<"\nPercentage: "<<percentage;
cout<<"\nFees: "<<fees;
}
};
void main()
{
clrscr();
result r;
r.getresult();
cout<<"\n\n------Student details------\n";
r.showresult();
getch();
}