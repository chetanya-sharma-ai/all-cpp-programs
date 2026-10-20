	/*Class with public & private visibility mode*/
	#include <iostream.h>
	#include<conio.h>
	class student              //keyword class name
	{
	private:
	char name[10];
	public:          //visibility mode
	int rollno;
	float marks;

	void getname()
	{
	cout<<"Enter name";
	cin>>name;
	}
	void showname()
	{
	cout<<"Name is"<<name<<endl;
	}
	};           //end of class
	void main()
	{
	clrscr();
	student std;   //class_name object_name
	std.rollno=101;
	std.marks=60.78;
	std.getname();
	std.showname();
	cout<<"Roll no is"<<std.rollno<<endl;
	cout<<"Marks is"<<std.marks<<endl;
	getch();
	}


