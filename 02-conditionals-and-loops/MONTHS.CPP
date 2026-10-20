/*Program to print months of a year*/
#include<iostream.h>
#include<conio.h>
void  main()
{
clrscr();
int month;
cout<<"Enter month from 1-12: ";
cin>>month;
if(month==1)
{
cout<<"It is a january";
}
else if (month==2)
{
cout<<"It is a february";
}
else if (month==3)
{
cout<<"It is a march";
}
else if (month==4)
{
cout<<"it is april";
}
else if (month==5)
{
cout<<"It is a may";
}
else if (month==6)
{
cout<<"it is a june";
}
else if (month==7)
{
cout<<"It is a july";
}
else if (month==8)
{
cout<<" it is a august";
}
else if (month==9)
{
cout<<"it is a september";
}
else if (month==10)
{
cout<<"it is a octuber";
}
else if (month==11)
{
cout<<"It is a november";
}
else if (month==12)
{
cout<<"it is a december";
}
else
{
cout<<"Entered number is incorrect!";
}
getch();
}
