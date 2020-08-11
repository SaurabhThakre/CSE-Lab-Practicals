#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble();
void selects();
void insert();
void shell();
void bucket();
void create(long int,long int);
long int a[1000000],c[100][100],b=11500,num=11500,i,n,t,x=0,j,z,st,k,y,g,temp,e,f,u;
double clk;
clock_t start,end;
void main()
{
int a;
do
{
printf("Press 1 for Bubble sort:\nPress 2 for Selection sort:\nPress 3 for Insertion sort:\nPress 4 for Shell Sort:\nPress 5 for Bucket Sort:\nPress 0 to Exit:\n");
scanf("%d",&a);
switch(a)
{
case 1:bubble();
break;
case 2:selects();
break;
case 3:insert();
break;
case 4:shell();
break;
case 5:bucket();
break;
case 0:exit(0);
}
}
while(a!=0);
}



void bubble()
{
printf("Enter no. of elements for array:");
scanf("%ld",&n);
create(t,n);
n=n+x;
start=clock();
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j+1]<a[j])
{
z=a[j];
a[j]=a[j+1];
a[j+1]=z;
}
}
}
printf("Array after Sorting:\n");
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
end=clock();
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
b=num;
}



void selects()
{
printf("Enter no. of elements for array:");
scanf("%ld",&n);
create(t,n);
n=n+x;
start=clock();
for(i=0;i<n;i++)
{
st=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[st])
{
st=j;
}
if(st!=i)
{
z=a[i];
a[i]=a[st];
a[st]=z;
}
}
}
printf("Array after Sorting:\n");
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
end=clock();
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
b=num;
}



void insert()
{
printf("Enter no. of elements for array:");
scanf("%ld",&n);
create(t,n);
n=n+x;
start=clock();
for(i=1;i<n;i++)
{
k=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]>k)
{
z=a[j+1];
a[j+1]=a[j];
a[j]=z;
}
}
}
printf("Array after Sorting:\n");
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
end=clock();
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
b=num;
}



void shell()
{
printf("Enter no. of elements for array:");
scanf("%ld",&n);
create(t,n);
n=n+x;
start=clock();
for(g=n/2;g>0;g/=2)
{
for(e=g;e<n;e++)
{
for(f=e;f>=g;f-=g)
{
if(temp<a[f-g])
{
temp=a[f];
a[f]=a[f-g];
a[f-g]=temp;
}
else
break;
}
}
}

for(i=1;i<n;i++)
{
k=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]>k)
{
z=a[j+1];
a[j+1]=a[j];
a[j]=z;
}
}
}
printf("Array after Sorting:\n");
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
end=clock();
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
b=num;
}



void bucket()
{
printf("Enter 10 elements for array:");
for(i=0;i<10;i++)
{
scanf("%ld",&a[i]);
}

printf("Press for:-\n1:Decreasing Order\n2:Increasing Order\n");
scanf("%ld",&t);
switch(t)
{
case 1:
for(i=1;i<10;i++)
{
k=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]<k)
{
z=a[j+1];
a[j+1]=a[j];
a[j]=z;
}
}
}
for(i=0;i<10;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
break;
case 2:
for(i=1;i<10;i++)
{
k=a[i];
for(j=i-1;j>=0;j--)
{
if(a[j]>k)
{
z=a[j+1];
a[j+1]=a[j];
a[j]=z;
}
}
}
for(i=0;i<10;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
}



start=clock();
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
c[i][j]=0;
}
}
for(i=0;i<10;i++)
{
j=0;
k=a[i]/10;
lab:
if(c[k][j]==0)
{
c[k][j]=a[i];
}
else
{
j=j+1;
goto lab;
}
}
for(z=0;z<10;z++)
{
for(i=0;i<9;i++)
{
for(j=0;j<10-i-1;j++)
{
if(c[z][j+1]==0)
break;
if(c[z][j]>c[z][j+1])
{
y=c[z][j];
c[z][j]=c[z][j+1];
c[z][j+1]=y;
}
}
}
}
printf("Array after Sorting:\n");
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
if(c[i][j]!=0)
{
printf("%ld\t",c[i][j]);
}
}
}
printf("\n");
end=clock();
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
b=num;
}



void create(long int t,long int n)
{
printf("Press for:-\n1:Decreasing Order\n2:Increasing Order\n3:Increasing order with the Nth element out of order\n4:Randomly generated elements\n ");
scanf("%ld",&t);
switch(t)
{
case 1:
for(i=0;i<n;i++)
{
a[i]=b;
b--;
}
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
break;

case 2:
for(i=0;i<n;i++)
{
a[i]=b;
b++;
}
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
break;

case 3:
printf("Enter no. of element that should be out of order after %ld elements:",n);
scanf("%ld",&x);
for(i=0;i<n;i++)
{
a[i]=b;
b++;
}
n=n+x;
for(i=n-x;i<n;i++)
{
a[i]=rand()%10000;
}
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
break;

case 4:
for(i=0;i<n;i++)
{
a[i]=rand()%10000;
}
for(i=0;i<n;i++)
{
printf("%ld\t",a[i]);
}
printf("\n");
}
}

