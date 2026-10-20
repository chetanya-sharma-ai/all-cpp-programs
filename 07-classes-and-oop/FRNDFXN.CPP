/*Friend function*/
#include<iostream.h>
#include<conio.h>
class demo
{
private:
int x,y;
public:
void getdata()
{
cout<<"Ente the value of x: ";
cin>>x;
cout<<"Enter the vlaue of y: ";
cin>>y;
}
void showdata()
{
cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;
}
friend void hello(demo obj);
};
void hello(demo obj)
{
cout<<"OBj.x: "<<obj.x<<endl;
cout<<"OBJ.y: "<<obj.y<<endl;
}
void main()
{
clrscr();
demo obj;
obj.getdata();
obj.showdata();
hello(obj);
getch();
}