/*Passing object by value using classes*/
#include<iostream.h>
#include<conio.h>
class demo
{
private:
int x,y;
public:
void getdata()
{
cout<<"Enter the value of x: ";
cin>>x;
cout<<"Enter the vlaue of y: ";
cin>>y;
}
void change(demo  obj)
{
obj.x+=5;
obj.y+=5;
cout<<"x= "<<obj.x<<endl;
cout<<"y= "<<obj.y<<endl;
}
void showdata()
{
cout<<"x= "<<x<<endl;
cout<<"y= "<<y<<endl;
}
};
void main()
{
demo obj, obj1;
clrscr();
obj.getdata();
obj.showdata();
obj1.change(obj);
obj.showdata();
getch();
}

