/*Program to read and input rollno,name,class,percentage,grade and mobile number*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int roll;
char name[20];
char classs[20];
float percentage;
char grade;
char number[11];
cout<<"Enter the roll number of student: ";
cin>>roll;
cout<<"Enter the name of student: ";
cin>>name;
cout<<"Entr the class of student: ";
cin>>classs;
cout<<"Enter the percentage obtained: ";
cin>>percentage;
cout<<"Enter the grade achived: ";
cin>>grade;
cout<<"Enter the phone number of student: ";
cin>>number;
cout<<"*******************"<<endl;
cout<<"Roll number= "<<roll<<endl;
cout<<"Name= "<<name<<endl;
cout<<"class= "<<classs<<endl;
cout<<"percentage obtained= "<<percentage<<endl;
cout<<"Grade obtained= "<<grade<<endl;
cout<<"phone number= "<<number<<endl;
cout<<"*******************************"<<endl;
getch();
}
