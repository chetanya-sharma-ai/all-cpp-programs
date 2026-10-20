/*pointer to pointer*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i=100;
int *j,**k;
j=&i;
k=&j;
cout<<"value of i= "<<i<<endl;
cout<<"value of *j= "<<*j<<endl;
cout<<"value of **k= "<<**k<<endl;
getch();
}
