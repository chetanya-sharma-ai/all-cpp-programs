/*Program to implement a stack*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
#define MAX 6
class stack
{
private:
int elem[MAX];
int top;
public:
stack()
{
top=-1;}
void push(int );
void pop();
void display();
~stack()                  //deconstructor to clean memory
{cout<<"Destroying stack";}};
void stack :: push(int item)
{
if (top==(MAX))
cout<<"Stack is full"<<endl;
else
{
top++;
elem[top]=item;
}}
void stack :: pop()
{
if (top==-1)
cout<<"Stack is empty"<<endl;
else
{
cout<<"Element poped"<<elem[top]<<endl;
top--;
}}
void stack :: display()
{
cout<<"Contents of stack"<<endl;
for(int i=0;i<=top;i++)
cout<<elem[i]<<endl;
}
void main()
{
clrscr();
stack s1;
int choice,val;
while(1)
{
cout<<"1. Push: "<<endl;
cout<<"2. Pop: "<<endl;
cout<<"3. Display: "<<endl;
cout<<"4. Exit: "<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter the element you want to push: "<<endl;
cin>>val;
s1.push(val);
break;
case 2:
s1.pop();
break;
case 3:
s1.display();
break;
case 4:
exit(0);
}
}
}

