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
	cout<<"Enter rollno";
	cin>>rollno;
	cout<<"Enter name";
	cin>>name;
	cout<<"Enter marks";
	cin>>marks;
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