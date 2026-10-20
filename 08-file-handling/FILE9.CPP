/*Use of getline function*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
char ch[80];
ifstream f("chetanya1");
cout<<"\nContents of the file are: "<<endl;
f.getline(ch,30);
cout<<ch;
f.close();
getch();
}