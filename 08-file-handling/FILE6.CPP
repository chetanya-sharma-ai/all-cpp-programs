/*Program to write/read data of class type*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class student
{
int rollno;
char name[20];
public:
void getdata()
{
cout<<"Enter name: ";
gets(name);
cout<<"Enter rollno: ";
cin>>rollno;
}
void showdata()
{
cout<<"Name is: "<<name<<endl;
cout<<"Roll no is: "<<rollno<<endl;
}
};
void main()
{
clrscr();
fstream f1;
f1.open("cpp",ios::app);
student std;
std.getdata();
f1.write((char * )&std,sizeof(std));
f1.close();
f1.open("cpp",ios::in);
f1.read((char *)&std,sizeof(std));
do
{
std.showdata();
f1.read((char *)&std,sizeof(std));
}     while(f1);
f1.close();
getch();
}