  /*Program to print name n times*/
  #include<iostream.h>
  #include<conio.h>
  #include<stdio.h>
  void main()
  {
  clrscr();
  int i,n;
  char name[50];
  cout<<"Enter your name: ";
  gets(name);
  cout<<"Enter number of times: ";
  cin>>n;
  for (i=1;i<=n;i++)
  {
  cout<<name<<"\t";
  }
  getch();
  }
