/*Progrma to  print fibonacci series*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,f1,f2,f3;
f1=0;
f2=1;
clrscr();
cout<<"Enter the numeber of terms: ";
cin>>n;
cout<<f1<<endl;
cout<<f2<<endl;
for(i=2;i<=n;++i)
{
f3=f1+f2;
cout<<f3<<endl;
f1=f2;
f2=f3;
}
getch();
}