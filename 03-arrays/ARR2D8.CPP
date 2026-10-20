/*Program of matrix multipilication*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();

int a[10][10],b[10][10],c[10][10];
int m,n,p,q;
int i,j,k;

cout<<"Enter rows and columns of first matrix: ";
cin>>m>>n;
cout<<"Enter rows and columns of second matirx: ";
cin>>p>>q;

if(n!=p)
{
cout<<"Matrix multiplication NOT possible";
exit (0);
}

cout<<"Enter the elements of first matrix: ";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>a[i][j];
}
}
cout<<"Enter the elements of second matrix: ";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cin>>b[i][j];
}
}

for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
cout<<"\nResultant matrix: \n";
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
getch();
}