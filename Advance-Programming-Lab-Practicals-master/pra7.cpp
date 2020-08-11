#include<iostream>
#include<stdlib.h>
using namespace std;
int r,h,l,b;
float ha,ca,cba;
class abc
{
public:
void total_surface_area()
{
ha=3*(22/7)*r*r;
ca=2*(22/7)*r*(r+h);
cba=2*l*h+2*h*b+2*b*l;
}
};

int main()
{
abc x;
int a;
do
{
cout<<"Press for Calculating Surface Area:\n1:Hemisphere\n2:Cylinder\n3:Cuboid\n0:Exit\n";
cin>>a;
switch(a)
{
case 1:cout<<"Enter Radius:";
cin>>r;
x.total_surface_area();
cout<<"Surface Area of Hemisphere:"<<ha;
cout<<"\n";
break;
case 2:cout<<"Enter Radius and Height:";
cin>>r>>h;
x.total_surface_area();
cout<<"Surface Area of Cylinder:"<<ca;
cout<<"\n";
break;
case 3:cout<<"Enter Length,Width and Height:";
cin>>l>>b>>h;
x.total_surface_area();
cout<<"Surface Area of Cuboid:"<<cba;
cout<<"\n";
break;
case 0:exit(0);
}
}
while(a!=0);
}
