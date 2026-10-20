/*Parametrized constructor*/
#include<iostream.h>
#include<conio.h>
class demo
{private:
int x,y;
public:
demo(int a,int b)
{x=a;y=b;}
void showdata()
{cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;}};              //end of class
void main()
{clrscr();
demo obj(20,30);           //implicit call
demo obj1=demo(50,40);     //explicit call
obj.showdata();obj1.showdata();getch();}