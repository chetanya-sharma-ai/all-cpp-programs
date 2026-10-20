	/*Class with public visibility mode*/
	#include <iostream.h>
	#include<conio.h>
	#include<string.h>

	class student              //keyword class name
	{
	public:          //visibility mode
	int rollno;      //data member
	char name[20];
	float marks;
	};           //end of class
	void main()
	{
	clrscr();
	student std;   //class name object name
	std.rollno=101;
	strcpy(std.name,"suhana");
	std.marks=70.89;
	cout<<"Roll no is "<<std.rollno<<endl;
	cout<<"Name is "<<std.name<<endl;
	cout<<"Marks is"<<std.marks;
	getch();
	}