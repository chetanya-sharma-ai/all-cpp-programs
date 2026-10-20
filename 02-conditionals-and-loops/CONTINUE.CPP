/*Program to use continue stateement*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i;
for(i=1;i<=100;i++)
{
if (i==70)
continue;
cout<<i<<"\t";
}
getch();
}