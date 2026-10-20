/*Program to read and print rollno,name,marks in 5 subjects,print their total and average(%)*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int rollno;
char name[25];
float phy,chem,math,eng,punj;
float total,avg;
cout<<"Enter Roll number: ";
cin>>rollno;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter marks in physics: ";
cin>>phy;
cout<<"Enter marks in chemistry: ";
cin>>chem;
cout<<"Enter marks in mathematics: ";
cin>>math;
cout<<"Enter marks in english: ";
cin>>eng;
cout<<"Enter marks in punjabi; ";
cin>>punj;

total=phy+chem+math+eng+punj;
avg=total/5;

cout<<"\n*********\n";
cout<<"roll number: "<<rollno<<endl;
cout<<"name: "<<name<<endl;

cout<<"Marks obtained are- "<<endl;
cout<<"Marks in physics: "<<phy<<endl;
cout<<"Marks in chemistry "<<chem<<endl;
cout<<"Msrks in mathematics: "<<math<<endl;
cout<<"Marks in english: "<<eng<<endl;
cout<<"Marks in punjabi: "<<punj<<endl;

cout<<"Total marks: "<<total<<endl;
cout<<"Average marks: "<<avg<<endl;
getch();
}