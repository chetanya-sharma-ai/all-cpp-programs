/*Program of matrix additionn*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int a[10][10],b[10][10],c[10][10];
int m,n,i,j;

cout<<"Enter rows and columns of matrix: ";
cin>>m>>n;

cout<<"Enter the elements of first matrix: ";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the elements of second matrix: ";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>b[i][j];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
cout<<"\nSum of matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<c[i][j]<<" ";
}
cout<<endl;
}
getch();
}