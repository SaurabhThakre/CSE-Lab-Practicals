#include<stdio.h>
#include<stdlib.h>
void car();
void bus();
void truck();
void revenue(int,int,int);
int x,y,c=0,b=0,t=0,r,o;
void main()
{
char a;
printf("\n");
printf("Enter Vehical Type (c for car, b for bus, t for truck) or Type r for revenue or Type o to exit:");
do
{
scanf("%c",&a);
switch(a)
{
case 'c': car();
break;
case 'b': bus();
break;
case 't': truck();
break;
case 'r': revenue(c,b,t);
break;
case 'o': exit(0);
}
}
while(a!='o');
}
void car()
{
printf("Enter Vehical No. & Time of crossing toll point resp. :");
scanf("%d%d",&x,&y);
printf("Vehical Type : Car\n ");
printf("Vehical No. :%d\n",x);
printf("Time of crossing toll point:%d\n",y);
printf("Vehical charge:15\n");
c++;
main();
}
void bus()
{
printf("Enter Vehical No. & Time of crossing toll point resp. :");
scanf("%d%d",&x,&y);
printf("Vehical Type : Bus\n ");
printf("Vehical No. :%d\n",x);
printf("Time of crossing toll point:%d\n",y);
printf("Vehical charge:25\n");
b++;
main();
}
void truck()
{
printf("Enter Vehical No. & Time of crossing toll point resp. :");
scanf("%d%d",&x,&y);
printf("Vehical Type : Truck\n ");
printf("Vehical No. :%d\n",x);
printf("Time of crossing toll point:%d\n",y);
printf("Vehical charge:35\n");
t++;
main();
}
void revenue(int f,int g,int h)
{
int p,q,t,w;
p=15*f;
q=25*g;
t=35*h;
w=p+q+t;
printf("Total revenue of car:%d\n ",p);
printf("Total revenue of bus:%d\n ",q);
printf("Total revenue of truck:%d\n ",t);
printf("Total revenue of all vehicals:%d\n ",w);
main();
}
