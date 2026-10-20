/*Program to print factorial of a number*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
long int fact=1;
cout<<"Enter a number: ";
cin>>n;

for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"Factorial of "<<n<<" = "<<fact;
getch();
}