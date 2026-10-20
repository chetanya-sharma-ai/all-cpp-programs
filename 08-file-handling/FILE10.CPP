/*Use of getline*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
char ch;
char sentence[100];
fstream f;
f.open("data",ios::out);
cout<<"\nType a sentence not more than 100 characters: \n";
cin.getline(sentence,20);
f<<sentence;
f.close();
f.open("data",ios::in);
cout<<"\n Contents of the file are: ";
while(f)
{
f.get(ch);
cout<<ch;
}
getch();
}