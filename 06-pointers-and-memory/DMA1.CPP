/*dynamic memeory allocation*/
#include<iostream.h>
#include<conio.h>
void main()
{
int *a;
clrscr();
a=new int;          //dynamic memory allocation
cout<<"Entoer a: ";
cin>>*a;
cout<<"a= "<<*a;
delete a;
getch();
}