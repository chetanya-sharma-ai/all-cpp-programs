/*Parametrized constructor*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class demo
{private:int rollno;float marks;char name[20];
public:demo(int r,float m,char c[])
{rollno=r;marks=m;strcpy(name,c);}
void showdata()
{cout<<"Rollno: "<<rollno<<endl;
cout<<"Marks: "<<marks<<endl;
cout<<"Name: "<<name<<endl;}};
void main()
{clrscr();
demo obj(101,50.23,"Chetanya");
obj.showdata();getch();}