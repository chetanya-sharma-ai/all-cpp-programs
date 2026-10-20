	/*Class with private visibility mode*/
	#include <iostream.h>
	#include<conio.h>
	#include<string.h>

	class student              //keyword class name
	{
	private:          //visibility mode
	int rollno;      //data member
	char name[20];
	float marks;
	public:
	void getdata()
	{
	rollno=101;
	strcpy(name,"saransh");
	marks=70.89;
	}
	void showdata()
	{
	cout<<"Roll no is "<<rollno<<endl;
	cout<<"Name is "<<name<<endl;
	cout<<"Marks is"<<marks;
	}
	};           //end of class
	void main()
	{
	clrscr();
	student std;   //class name object name
	std.getdata();
	std.showdata();
	getch();
	}