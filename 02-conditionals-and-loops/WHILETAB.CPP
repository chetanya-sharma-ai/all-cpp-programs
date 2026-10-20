/*Program to print table of any number using while: */
 #include<iostream.h>
 #include<conio.h>
 void main()
 {
 clrscr();
 int n,i;
 cout<<"Enter the number whose table you want to print ";
 cin>>n;
 i=1;
 while(i<=10)
 {
 cout<<n<<"x "<<i<<" = "<<n*i<<endl;
 i++;
 }
 getch();
 }