/*Member function with arguments*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
private:
int rollno;
char name[20];
public:
void getdata(int r,char n[])
{
rollno=r;
strcpy(name,n);
}
void showdata(){
cout<<"Roll no: "<<rollno<<endl;
cout<<"Name: "<<name<<endl;}};
void main(){
clrscr();
student std;
std.getdata(101,"Chetanya");
std.showdata();
getch();}