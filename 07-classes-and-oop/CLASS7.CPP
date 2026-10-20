/*Pragram to calculate simple interests using class*/
#include<iostream.h>
#include<conio.h>
class interest
{
private:
float product;
float rate;
float time;
float s;
public:
void  getdata()
{
cout<<"Enter product: ";
cin>>product;
cout<<"Enter Rate: ";
cin>>rate;
cout<<"enter time: ";
cin>>time;
}
void showdata()
{
cout<<"product= "<<product<<endl;
cout<<"Rate= "<<rate<<endl;
cout<<"Time= "<<time<<endl;
}
void  si()
{
s=(product*rate*time)/100;
cout<<"Simple interest= "<<s;
}
};
void main()
{
clrscr();
interest obj;
obj.getdata();
obj.showdata();
obj.si();
getch();
}
