/*Prog. to print name,rollno & city of a student*/
#include <iostream.h>
#include<conio.h>
#include<string.h>
class student              //keyword class name
{
public:          //visibility mode
int rollno;
char name[10],city[10];
};           //end of class
void main()
{
clrscr();
student std;   //class name object name
std.rollno=101;
strcpy(std.name,"Darpan");
strcpy(std.city,"Pathankot");
cout<<"Roll no is" << std.rollno<<endl;
cout<<"Name is" << std.name<<endl;
cout<<"City is" << std.city<<endl;
getch();
}


