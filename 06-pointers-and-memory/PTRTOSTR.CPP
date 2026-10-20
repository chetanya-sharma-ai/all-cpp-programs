/*pointer and strings*/
#include<iostream.h>
#include<conio.h>
void main()
{
char str1[]="This is an araray";
char *str2;
str2=str1;
clrscr();
cout<<str1<<endl;
cout<<str2<<endl;
cout<<"Base address of string 1= "<<&str1<<endl;
cout<<"Base address of string 2= "<<&str2<<endl;
cout<<str2+5<<endl;
cout<<*(str2+5);
getch();
}
