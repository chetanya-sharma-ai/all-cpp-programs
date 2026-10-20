/*Copy contructor*/
#include<iostream.h>
#include<conio.h>
class demo
{private:int x,y;
public:demo()   //default
{x=10,y=20;}
demo(demo &obj)        //copy
{x=obj.x;    y=obj.y;}
void  showdata()
{cout<<"X= "<<x<<endl;cout<<"Y= "<<y<<endl;}};
void main()
{clrscr();
demo obj;
demo  obj1=obj;
obj.showdata();obj1.showdata();getch();}