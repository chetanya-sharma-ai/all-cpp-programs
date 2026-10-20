
/*program to copy a string without using strcpy*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char str1[50],str2[50];
int i;
cout<<"Enter a string: ";
cin>>str1;
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
cout<<"Copied string: "<<str2;
getch();
}