/*Program to use break stateement*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=1;i<=100;i++)
{
if (i==80)
break;
cout<<i<<"\t";
}
getch();
}