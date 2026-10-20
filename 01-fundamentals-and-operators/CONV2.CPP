/*conversion between object and basic types*/
#include<iostream.h>
#include<conio.h>
class data
{
int x,y,z;
public:
data(float d)
{
x=(int)d/2;
y=(int)d/3;
z=(int)d/5;
}
void show()
{
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
}};
void main()
{
clrscr();
data obj(50);
float d=70;
obj.show();
obj=d;
obj.show();
getch();
}

