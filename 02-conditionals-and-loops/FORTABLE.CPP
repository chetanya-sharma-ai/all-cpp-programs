/*Program to print table of any number: */
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int n,i;
 cout<<"Enter the number whose table you want to print ";
 cin>>n;

 for(i=1;i<=10;i++)
 {
 cout<<n<<"x "<<i<<" = "<<n*i<<endl;
 }
 getch();
 }