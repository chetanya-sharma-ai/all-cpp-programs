/*Program to print factorial of a number using while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i;
long int fact=1;
cout<<"Enter a number: ";
cin>>n;
i=1;
while(i<=n)
{
fact=fact*i;
i++;
}
cout<<"Factorial of "<<n<<" = "<<fact;
getch();
}