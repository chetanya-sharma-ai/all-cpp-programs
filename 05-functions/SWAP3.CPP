/*program to swap three numbers: */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter three numbers: ";
cin>>a;
cin>>b;
cin>>c;
a=a+b+c;
b=a-(b+c);
c=a-(b+c);
a=a-(b+c);
cout<<"\nAfter swapping: \n";
cout<<"A= "<<a<<endl;
cout<<"B= "<<b<<endl;
cout<<"C= "<<c<<endl;
getch();
}