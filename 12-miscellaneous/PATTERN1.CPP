/*Program to print patterm:
1
22
333
4444
55555
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<"  ";
}
cout<<endl;
}
getch();
}