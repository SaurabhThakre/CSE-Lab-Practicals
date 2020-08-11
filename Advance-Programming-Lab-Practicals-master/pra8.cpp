#include <iostream>
using namespace std;
class complex
{
public:
float real,image;
complex(int r,int i)
{
real=r;
image=i;
}
complex add(complex c1,complex c2)
{
complex c3(0,0);
c3.real=c1.real+c2.real;
c3.image=c1.image+c2.image;
return c3;
}
int reals()
{
return real;
}
int images()
{
return image;
}
};

int main()
{
float r1,i1,r2,i2;
complex c1(0,0),c2(0,0),c3(0,0);
cout<<"Enter Real And Imaginary part:";
cin>>r1>>i1;
c1.real=r1;
c1.image=i1;
cout<<"To Add Complex Number to "<<r1<<"+"<<i1<<"i\n";
cout<<"Enter Real And Imaginary part:";
cin>>r2>>i2;
c2.real=r2;
c2.image=i2;
c3=c1.add(c1,c2);
cout<<"SUM="<<c3.reals()<<"+"<<c3.images()<<"i\n";
}


