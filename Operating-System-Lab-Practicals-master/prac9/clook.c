#include<stdio.h>
#include<stdlib.h>
int a[]={98,183,37,122,14,124,65,67};
int f[8],s[8],p[8];
int max,min,i,x,y,m,z,k=0;
void main()
{
	max=a[0];
	for(m=1;m<8;m++)
	{
		if(max<a[m])
		{
			max=a[m];
		}
	}
	
	for(i=53;i<=max;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(a[j]==i && f[j]!=1)
			{
				s[k]=a[j];
				f[j]=1;
				k++;
			}
		}
	}
	min=a[0];
	for(m=1;m<8;m++)
	{
		if(min>a[m])
		{
			min=a[m];
		}
	}
	for(i=min;i<53;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(a[j]==i && f[j]!=1)
			{
				s[k]=a[j];
				f[j]=1;
				k++;
			}
		}
	}
	int n=0;
	for(m=0;m<8;m++)
	{
		if(a[m]<53)
		{
			p[n]=a[m];
			n++;
		}
	}
	int max1=p[0];
	for(m=1;m<8;m++)
	{
		if(max1<p[m])
		{
			max1=p[m];
		}
	}
	for(int j=0;j<8;j++)
	{
		printf("%d\t",s[j]);
	}
	x=abs(max-53);
	y=abs(min-max);
	z=abs(max1-min);
	printf("Total seek time:%d\n",(x+y+z));
}
