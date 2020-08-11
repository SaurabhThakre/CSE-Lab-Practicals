#include <iostream>
using namespace std;

class DB
{
public:
float feet,inch;
DB(float f,float i)
{
feet=f;
inch=i;
}

DB convert()
{
feet=feet*0.3;
inch=inch*2.54;
}
};


class DM
{
public:
float ms,cm;
DM(float m,float c)
{
ms=m;
cm=c;
}
friend DM operator+(DM,DB);
};


DM operator+(DM ob1,DB ob2)
{
DM ob3(0,0);
ob3.ms=ob1.ms+ob2.feet;
ob3.cm=ob1.cm+ob2.inch;
return ob3;
}


int main()
{
float m1,c1,f1,i1;
DM ob1(0,0),ob3(0,0);
DB ob2(0,0);
cout<<"Enter Distance(meter and centimeter):";
cin>>m1>>c1;
ob1.ms=m1;
ob1.cm=c1;
cout<<m1<<"m "<<c1<<"cm\n";
cout<<"Enter Distance(feet and inch):";
cin>>f1>>i1;
ob2.feet=f1;
ob2.inch=i1;
cout<<f1<<"feet "<<i1<<"inch\n";
ob2.convert();
ob3=ob1+ob2;
cout<<"SUM="<<ob3.ms<<"m "<<ob3.cm<<"cm\n";
return 0;
}





