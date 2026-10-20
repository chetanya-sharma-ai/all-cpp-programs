/*Program to print of an year using a switch*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int month;
cout<<"Enter the month from 1-12: ";
cin>>month;
switch(month)
{
case 1:
cout<<"Its a january";
break;
case 2:
cout<<"Its a february";
break;
case 3:
cout<<"its a march";
break;
case 4:
cout<<"Its a april";
break;
case 5:
cout<<"Its a may";
break;
case 6:
cout<<"Its a june";
break;
case 7:
cout<<"Its a july";
break;
case 8:
cout<<"its a august";
break;
case 9:
cout<<"its a september";
break;
case 10:
cout<<"its a octuber";
break;
case 11:
cout<<"its novemeber";
break;
case 12:
cout<<"its a december";
break;
default:
cout<<"wrong choice!!!";
break;
}
getch();
}
