/*conversion between objects of different classes*/
#include<iostream.h>
#include<conio.h>
class data
{
int x,y;
public:
data(int a,int b)
{
x=a;
y=b;
}
void show()
{
cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;
}
int returnx()
{
return (x);
}
int returny()
{
return (y);
}

};
class demo
{
int j,k;
public:
demo(data d)
{
j=d.returnx();
k=d.returny();
}
void show()
{
cout<<"J= "<<j<<endl;
cout<<"K= "<<k<<endl;
}};
void main()
{
clrscr();
data obj(5,6);
demo obj1=obj;
obj.show();
obj1.show();
getch();
}
