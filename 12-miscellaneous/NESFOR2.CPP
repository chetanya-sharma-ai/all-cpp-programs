/*Program to use nested for*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
for(i=1;i<=3;i++)
{
for(j=1;j<=2;j++)
{
for(k=1;k<=3;k++)
{
cout<<i+j+k<<endl;
}
}
}
getch();
}