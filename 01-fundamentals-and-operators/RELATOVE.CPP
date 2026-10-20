/*Relational operator overloading*/
#include<iostream.h>
#include<conio.h>
class relational
{
int x;
public:
relational(int a)     //parametrized constructor
{
x=a;
}
int operator<(relational obj)     //operator overloading
{
return(x<obj.x);
}
};
void main()
{
clrscr();
relational obj1(10),obj2(20);
cout<<"(Obj1<Obj2)"<<(obj1<obj2);
getch();
}