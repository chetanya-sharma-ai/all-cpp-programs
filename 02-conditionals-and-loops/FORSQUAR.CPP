/*program to print square and cubes of any number n*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,n2,n3;
cout<<"Enter the value of n upto which you want to display ";
cin>>n;
cout<<"number"<<"\t"<<"Square"<<"   Cube "<<endl;
for(i=1;i<=n;i++)
{
cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
}
getch();
}


