/*program to convert  time in sec into hours min and sec*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int tinsec,hrs,min,sec,k;

cout<<"Enter time in seconds: ";
cin>>tinsec;

hrs=tinsec/3600;
k=tinsec%3600;
min=k/60;
sec=k%60;

cout<<"\n Hours= "<<hrs<<endl;
cout<<"Minutes= "<<min<<endl;
cout<<"Seconds= "<<sec<<endl;
getch();
}
