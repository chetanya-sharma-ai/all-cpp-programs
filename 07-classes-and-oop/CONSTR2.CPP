/*Default constructor outside class*/
#include<iostream.h>
#include<conio.h>
class demo
{private:
int x,y;
public:
demo();
void showdata();};     //end of class
demo :: demo()
{
x=10;
y=20;}
void demo :: showdata()
{cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;}
void main(){clrscr();
demo obj;
obj.showdata();getch();}

