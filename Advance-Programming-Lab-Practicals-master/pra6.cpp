#include<iostream>
using namespace std;
class emp
{
int eid,sal;
char ename[10];
int dbd,dbm,dby,djd,djm,djy;
int age,exp;
public:
void details();
void find_age();
void find_work_exp();
void show();
}e[3];

void emp::details()
{
cout<<"Enter Employee ID and Name:\n";
cin>>eid>>ename;
cout<<"Enter Date of Birth(dd,mm,yyyy):\n";
cin>>dbd>>dbm>>dby;
cout<<"Enter Date of Joining(dd,mm,yyyy):\n";
cin>>djd>>djm>>djy;
cout<<"Enter Salary:\n";
cin>>sal;
}

int main()
{
int i;
cout<<"Enter details of Employees:\n";
for(i=0;i<3;i++)
{
e[i].details();
}
for(i=0;i<3;i++)
{
e[i].find_age();
e[i].find_work_exp();
}
cout<<"Details of Employees:";
for(i=0;i<3;i++)
{
e[i].show();
}
cout<<"\n";
}

void emp::find_age()
{
age=2018-dby;
}

void emp::find_work_exp()
{
exp=2018-djy;
}

void emp::show()
{
cout<<"\n\nEmployee Name:"<<ename;
cout<<"\nEmployee ID:"<<eid;
cout<<"\nEmployee Salary:"<<sal;
cout<<"\nEmployee Age(years):"<<age;
cout<<"\nEmployee Experience(years):"<<exp;
}

