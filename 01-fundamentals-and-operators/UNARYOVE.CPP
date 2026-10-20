
/*Use of uanry operator in ioperator overloading*/
#include<iostream.h>
#include<conio.h>
class data
{
int count;
public:
data()
{
count=0;
}
void show()
{
cout<<endl<<"count= "<<count;
}
void operator ++()            //operator overloading
{
++count;
}
};
void main()
{
clrscr();
data obj;
obj.show();
++obj;
obj.show();
++obj;
obj.show();
getch();
}
