/*Program to make diagonal elements of a matrix=0: */
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
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
if (i==j)
{
a[i][j]=0;
}
}
}
cout<<"resultant matrix after making diagonal elemenents ZERO: "<<endl;
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}
getch();
}