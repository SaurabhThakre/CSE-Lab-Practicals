#include<stdio.h>
#include<stdlib.h>
int stat(int,int,int,int);
int dynamic(int,int,int,int);
int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],mul[10][10],sum=0;
int l;
void main()
{
printf("Enter No. of Rows and Columns for Matrix 1:");
scanf("%d%d",&r1,&c1);
printf("Enter the Elelments for Matrix 1:");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Matrix 1:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Enter No. of Rows and Columns for Matrix 2:");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
printf("Matrix Multiplication is not possible");
}
else
{
printf("Enter the Elelments for Matrix 2:");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Matrix 2:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
do
{
printf("Type 0 for static multiplication\n Type 1 for dynamic multiplication\n Type 2 to Exit:");
scanf("%d",&l);
switch(l)
{
case 0:stat(r1,r2,c1,c2);
break;
case 1:dynamic(r1,r2,c1,c2);
break;
case 2:exit(0);
}
}
while(l!=2);
}
}





int stat(int x1,int x2,int y1,int y2)
{
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
for(k=0;k<y1;k++)
{
sum=sum+a[i][k]*b[k][j];
}
mul[i][j]=sum;
sum=0;
}
}
printf("Multiplied Matrix:\n");
{
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
}
}




int dynamic(int x1,int x2,int y1,int y2)
{
int **p,**q,**r;
p=malloc(x1*sizeof*p);
for(i=0;i<x1;i++)
{
p[i]=malloc(y1*sizeof*p[i]);
}
q=malloc(x2*sizeof*q);
for(i=0;i<x2;i++)
{
q[i]=malloc(y2*sizeof*q[i]);
}
r=malloc(x1*sizeof*r);
for(i=0;i<x1;i++)
{
r[i]=malloc(c2*sizeof*r[i]);
}
for(i=0;i<x1;i++)
{
for(j=0;j<y1;j++)
{
p[i][j]=a[i][j];
}
}
for(i=0;i<x2;i++)
{
for(j=0;j<y2;j++)
{
q[i][j]=b[i][j];
}
}
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
for(k=0;k<x2;k++)
{
sum=sum+p[i][k]*q[k][j];
}
r[i][j]=sum;
sum=0;
}
}
printf("Multiplied Matrix:\n");
for(i=0;i<x1;i++)
{
for(j=0;j<y2;j++)
{
printf("%d\t",r[i][j]);
}
printf("\n");
}
}
