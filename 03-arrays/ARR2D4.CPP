/*Program to print sum  of diagonal elements of a matrix: */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][5];
int i,j,m,n;
cout<<"Enter the number of rows and columns in a matrix: ";
cin>>m>>n;
cout<<"Enter the elements of a matrix: ";
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
cin>>a[i][j];
}
}
int sum=0;
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
if (i==j)
{
sum=sum+a[i][j];
}
}
}
cout<<"Sum of diagonal elements are: "<<sum;
getch();
}