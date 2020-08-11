#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void create(int,int);
void quick();
void quicksort(int[],int,int);
int partition(int[],int,int);
void quicks();
void quicksorts(int[],int,int);
int partitions(int[],int,int);
void swap(int*,int*);
void merges();
void merge(int[],int,int,int);
void mergesort(int[],int,int);
int a[1000000],t,c=50000,num=50000,n,x;
double clk;
clock_t start,end;
void main()
{
int a;
do
{
printf("Press 1 for Quick sort with last pivot element:\nPress 2 for Quick sort with 1st pivot element:\nPress 3 for Merge sort:\nPress 0 to Exit:\n");
scanf("%d",&a);
switch(a)
{
case 1:quick();
break;
case 2:quicks();
break;
case 3:merges();
break;
case 0:exit(0);
}
}
while(a!=0);
}



void quick()
{
int p,q,r,i,j;
printf("Enter no. of elements for array:");
scanf("%d",&n);
create(t,n);
n=n+x;
start=clock();
quicksort(a,0,n-1);
end=clock();
printf("Sorted Array:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
c=num;
}


void quicksort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=partition(a,p,r);
quicksort(a,p,q-1);
quicksort(a,q+1,r);
}
}


int partition(int a[],int p,int r)
{
int i,j,x;
x=a[r];
i=p-1;
for(j=p;j<=r-1;j++)
{
if(a[j]<=x)
{
i=i+1;
swap(&a[i],&a[j]);
}
}
swap(&a[i+1],&a[r]);
return(i+1);
}


void swap(int*j,int*k)
{
t=*j;
*j=*k;
*k=t;
}



void quicks()
{
int p,q,r,i;
printf("Enter no. of elements for array:");
scanf("%d",&n);
create(t,n);
n=n+x;
start=clock();
quicksorts(a,0,n-1);
end=clock();
printf("Sorted Array:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
c=num;
}


void quicksorts(int a[],int p,int r)
{
int q;
if(p<r)
{
q=partitions(a,p,r);
quicksorts(a,p,q-1);
quicksorts(a,q+1,r);
}
}


int partitions(int a[],int p,int r)
{
int i,j,x;
x=a[p];
i=r+1;
for(j=r;j>=p+1;j--)
{
if(a[j]>=x)
{
i=i-1;
swap(&a[i],&a[j]);
}
}
swap(&a[i-1],&a[p]);
return(i-1);
}



void merges()
{
int p,q,r,i;
printf("Enter no. of elements for array:");
scanf("%d",&n);
create(t,n);
n=n+x;
start=clock();
mergesort(a,0,n-1);
end=clock();
printf("Sorted Array:\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
clk=(double)(end-start)/CLOCKS_PER_SEC;
printf("Time of Execution:%lf\n",clk);
c=num;
}

void mergesort(int a[],int p,int r)
{
int q;
if(p<r)
{
q=(p+r)/2;
mergesort(a,p,q);
mergesort(a,q+1,r);
merge(a,p,q,r);
}
else
return;
}

void merge(int a[],int p,int q,int r)
{
int n1,n2,i,j,k;
n1=q-p+1;
n2=r-q;
int L[n1],R[n2];
for(i=0;i<n1;i++)
{
L[i]=a[p+i];
} 
for(j=0;j<n2;j++)
{
R[j]=a[q+1+j];
} 
i=0;
j=0;
k=p;

while(i<n1 && j<n2)
{
if(L[i]<=R[j])
{
a[k]=L[i];
i++;
}
else
{
a[k]=R[j];    
j++;
}
k++;
}

while(i<n1)
{
a[k]=L[i];
i++;
k++;
}

while(j<n2)
{
a[k]=R[j];
j++;
k++;
}


}



void create(int t,int n)
{
int i;
printf("Press for:-\n1:Decreasing Order\n2:Increasing Order\n3:Increasing order with the Nth element out of order\n4:Randomly generated elements\n ");
scanf("%d",&t);
switch(t)
{
case 1:
for(i=0;i<n;i++)
{
a[i]=c;
c--;
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
break;

case 2:
for(i=0;i<n;i++)
{
a[i]=c;
c++;
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\n");
break;

case 3:
printf("Enter no. of element that should be out of order after %d elements:",n);
scanf("%d",&x);
for(i=0;i<n;i++)
{
a[i]=c;
c++;
}
n=n+x;
for(i=n-x;i<n;i++)
{
a[i]=rand()%10000;
}
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
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
printf("%d\t",a[i]);
}
printf("\n");
}
}

