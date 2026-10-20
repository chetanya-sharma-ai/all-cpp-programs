/*Program to show transpose elements of a matrix: */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][5],b[5][5];
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
b[i][j]=a[j][i];
}}
cout<<"Matrix after transpose: "<<endl;
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
cout<<b[i][j]<<"\t";
}
cout<<endl;
}
getch();
}