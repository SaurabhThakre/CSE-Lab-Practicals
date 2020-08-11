#include<stdio.h>
void bestfit(int[],int[]);
void worstfit(int[],int[]);
void main()
{

int partition[5] = {100, 500, 200, 300, 600}, process[4] = {212, 417, 112, 426};
printf("Bestfit Method\n\n");
bestfit(partition,process);
int partition1[5] = {100, 500, 200, 300, 600}, process1[4] = {212, 417, 112, 426};
printf("\nWorstfit Method\n\n");
worstfit(partition1,process1);
}

void bestfit(int partition[],int process[])
{
int free[4],allocation[4];
int best=-1,i,j,sum=0;
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(process[i]<=partition[j])
{
if(best==-1)
best=j;
else if(partition[j]<partition[best])
best=j;
}
}
allocation[i]=partition[best];
free[i]=partition[best]-process[i];
partition[best]=9999;
}

printf("Process\tPartition\tFragment\n");
for(i=0;i<4;i++)
{
printf("%d\t%d\t\t%d\n",process[i],allocation[i],free[i]);
}

for(i=0;i<4;i++)
{
sum=sum+free[i];
}

printf("Total free memory : %d\n",sum);
}



void worstfit(int partition1[],int process1[])
{
int free1[4],allocation1[4];
int best=-1,i,j,sum=0;
for(i=0;i<4;i++)
{
for(j=0;j<5;j++)
{
if(process1[i]<=partition1[j])
{
if(best==-1)
best=j;
else if(partition1[j]>partition1[best])
best=j;
}
}
allocation1[i]=partition1[best];
free1[i]=partition1[best]-process1[i];
if(free1[i]<0)
{
free1[i]=0;
}
partition1[best]=0;
}

printf("Process\tPartition\tFragment\n");
for(i=0;i<4;i++)
{
printf("%d\t%d\t\t%d\n",process1[i],allocation1[i],free1[i]);
}


for(i=0;i<4;i++)
{
sum=sum+free1[i];
}

printf("Total free memory : %d\n",sum);
}
