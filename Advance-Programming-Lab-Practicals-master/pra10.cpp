#include<iostream>
#include <string.h>
using namespace std;

char name[10],add[10];
int num,dd,mm,yy;
int pay,payd,workday;

class staff
{
protected:
public:
void get()
{
cout << "Name: "; cin >> name;
cout << "Address: "; cin >> add;
cout << "Phone Number: "; cin >> num;
cout << "Date of joining(dd,mm,yyyy): "; cin >> dd >> mm >> yy;
}
};


class lecturer : public staff
{
protected:
public:
void getdata()
{
cout << "Name: " << name << "\n";
cout << "Pay per month: "; cin >> pay;
}
};


class nonteach : public staff
{
protected:
public:
void getdata1()
{
cout << "Name: " << name << "\n";
cout << "No. of working days and Pay per day: "; cin >> workday >> payd;
pay=payd*workday;
}
};


class salary : public lecturer, public nonteach
{
protected:
public:
void display()
{
cout << "----------------------------------------------------------------------------";
cout << "\nName: " << name;
cout << "\nAddress: " << add;
cout << "\nPhone Number: " << num;
cout << "\nDate of joining(dd,mm,yyyy): " << dd <<" "<< mm <<" "<< yy;
cout << "\nSalary: " << pay;
cout << "\n-----------------------------------------------------------------------------\n";
}
};


int main()
{
int a;
staff s;
lecturer l;
nonteach n;
salary o;
s.get();
cout << "Press if staff\n1:Lecturer\n2:Non teaching staff\n"; cin >> a;
if(a==1)
l.lecturer::getdata();
else
n.nonteach::getdata1();
o.salary::display();
cout << "Press\n1:Continue\n0:Exit\n"; cin >> a;
if(a==1)
main();
else
exit(0);
}


