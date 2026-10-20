/*Program to print addition,subtraction,multiply,division,remaider*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char letter;
int a,b;
cout<<"Enter the value of a and b: ";
cin>>a>>b;
cout<<"Enter letter A,S,P,R,D";
cout<<"a=addition"<<endl;
cout<<"s=subtraction"<<endl;
cout<<"p=product"<<endl;
cout<<"r=remainder"<<endl;
cout<<"d=division"<<endl;
cin>>letter;
switch(letter)
{
case'a':
case'A':
cout<<"sum is: "<<a+b<<endl;
break;
case's':
case'S':
cout<<"difference is: "<<a-b<<endl;
break;
case'p':
case'P':
cout<<"product is: "<<a*b<<endl;
break;
case'r':
case'R':
cout<<"remainder left is: "<<a%b<<endl;
break;
case'd':
case'D':
cout<<"division is: "<<(float)a/b<<endl;
break;
default:
cout<<"enter letter is wrong!!!!"<<endl;
}
getch();
}





