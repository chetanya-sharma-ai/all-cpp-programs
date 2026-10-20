/*Pointer using array*/
#include<iostream.h>
#include<conio.h>
void main()
{
int *a,i;
int b[5]={10,20,30,40,50};
clrscr();
a=b;    //assign the base address of array to pointer variable
i=0;
while(i<5)
{
cout<<"\n"<<i<<"\t"<<*a<<"\t"<<a;
i++;
a++;
}
getch();
}