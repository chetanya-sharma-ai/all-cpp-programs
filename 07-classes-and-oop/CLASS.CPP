/*Class with public visibility mode*/
#include <iostream.h>
#include<conio.h>
class student              //keyword class name
{
public:          //visibility mode
int rollno;
int marks;
};           //end of class
void main()
{
clrscr();
student std,std1;   //class name object name
std.rollno=101;
std.marks=60;
std1.rollno=102;
std1.marks=70;
cout<<"Roll no is"<<std.rollno<<endl;
cout<<"Marks is"<<std.marks<<endl;
cout<<"Roll no is"<<std1.rollno<<endl;
cout<<"Marks is"<<std1.marks;
getch();
}