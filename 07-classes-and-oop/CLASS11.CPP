/*Prog to calculate simple interest using class by defining outside*/
#include<iostream.h>
#include<conio.h>
class interest
{
private:
float product,rate,time,simi;
public:
void getdata();
void si();
};
void interest::getdata()
{
cout<<"Enter the product: ";
cin>>product;
cout<<"Enter the Rate: ";
cin>>rate;
cout<<"Enter the time: ";
cin>>time;
}
void interest::si()
{
simi=(product*rate*time)/100;
cout<<"\nSimple interest: "<<simi<<endl;
}
void main()
{
clrscr();
interest obj;
obj.getdata();
obj.si();
getch();
}