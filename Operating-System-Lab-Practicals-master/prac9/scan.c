//SCAN ALGORITHM
#include<stdio.h>
#include <stdlib.h>
void main()
{
	int a[]={98,183,37,122,14,124,65,67};
	int i,f[8]={},s[8],k=0,min,x,y,m;
	for(i=53;i<199;i++)
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
	for(i=53;i>=min;i--)
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
	for(int j=0;j<8;j++)
	{
		printf("%d\t",s[j]);
	}
	
	x=199-53;
	y=abs(min-199);
	printf("\nTotal seek time:%d\n",(x+y));
}
