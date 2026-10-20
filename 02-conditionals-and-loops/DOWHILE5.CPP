/*Program to find multiplication table of a number using do while*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1;
cout<<"Enetr the value of n: ";
cin>>n;
do
{
cout<<n<<" x "<<i<<" = "<<n*i<<endl;
i++;
}
while(i<=10);

getch();
}
