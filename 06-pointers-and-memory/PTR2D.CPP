/* Array of Pointer*/
#include<iostream.h>
#include<conio.h>
void main()
{
int a=10,b=6,c=8,i;
int *d[3];
clrscr();
d[0]=&a;
d[1]=&b;
d[2]=&c;
cout<<"Array elemmts are"<<endl;
for(i=0;i<3;i++)
{
cout<<*d[i]<<endl;
}
getch();
}
