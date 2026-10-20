/*Friend class*/
#include<iostream.h>
#include<conio.h>
class B;
class A
{
private:
int x;
public:
void getx()
{
cout<<"Enter the value of x: ";
cin>>x;
}
friend class B;
};
class B
{
private:
int y;
public:
void showfriend(A obj)
{
cout<<endl<<"X= "<<obj.x<<endl;
}
void gety()
{
cout<<"Enter the vlaue of y: ";
cin>>y;
}
void showy()
{
cout<<"Y= "<<y<<endl;
}
};
void main()
{
clrscr();
A ob;
B obj;
ob.getx();
obj.showfriend(ob);
obj.gety();
obj.showy();
getch();
}