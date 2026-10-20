/*Default constructor using class*/
#include<iostream.h>
#include<conio.h>
class demo
{private:
int x,y;
public:
demo()     //default  constructor
{x=10;y=20;}
void showdata()
{cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;}
};
void main()
{clrscr();
demo obj;
obj.showdata();
getch();}