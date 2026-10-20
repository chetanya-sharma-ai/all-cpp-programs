/*Program to print book id, book name, author, price, publisher and edition with multiple inheritance*/
#include<iostream.h>
#include<conio.h>
class class1
{
private:
int book_id;
char book_name[30];
public:
void getbook()
{
cout<<"Enter book id: ";
cin>>book_id;
cout<<"Enter book name: ";
cin>>book_name;
}
void showbook()
{
cout<<"\nBook ID: "<<book_id;
cout<<"\nBook Name: "<<book_name;
}
};
class class2
{
private:
char author[30];
float price;
public:
void getauthor()
{
cout<<"Enter author: ";
cin>>author;
cout<<"Enter price: ";
cin>>price;
}
void showauthor()
{
cout<<"\nauthor: "<<author;
cout<<"\nPrice: "<<price;
}
};
class class3
{
private:
char publisher[30];
char edition[20];
public:
void getpublisher()
{
cout<<"Enter publisher: ";
cin>>publisher;
cout<<"Enter edition: ";
cin>>edition;
}
void showpublisher()
{
cout<<"\nPublisher: "<<publisher;
cout<<"\nEdition: "<<edition;
}
};
class class4 : public class1,public class2,public class3
{
public:
void display()
{
cout<<"\nBook Details: \n";
showbook();
showauthor();
showpublisher();
}
};
void main()
{
clrscr();
class4 b;
b.getbook();
b.getauthor();
b.getpublisher();
b.display();
getch();
}
