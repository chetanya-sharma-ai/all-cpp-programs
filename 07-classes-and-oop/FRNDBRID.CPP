/*Function as a bridge*/
#include<iostream.h>
#include<conio.h>
class B;
class A
{
private:
int x;
public:
void getshowx()
{
cout<<"Enter the vlaue of x: ";
cin>>x;
cout<<"X= "<<x<<endl;
}
friend int sum(A obj, B obj1);
};
class B
{
int y;
public:
void getshowy()
{
cout<<"Enter the vlaue of y: ";
cin>>y;
cout<<"Y= "<<y<<endl;
}
friend int sum(A obj, B obj1);
};
int sum(A obj, B obj1)
{
int c=obj.x+obj1.y;
return c;
}
void main()
{
clrscr();
int s;
A obj;
B obj1;
obj.getshowx();
obj.getshowy();
s=sum(obj,obj1);
cout<<"Sum= "<<s;
getch();
}