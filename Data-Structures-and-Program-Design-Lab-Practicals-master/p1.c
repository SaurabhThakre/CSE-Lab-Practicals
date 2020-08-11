#include<stdio.h>
#include<stdlib.h>
int create();
int display();
int insert();
int del();
int merge();
int empty();
int full();
int i,l,w,a[100],m;
void main()
{
int n;
create();
do
{
printf("Press 2 for Display Array:\nPress 3 for Inserting Element:\nPress 4 for Deleting Element:\nPress 5 for Merging two array:\nPress 6 to check array is Empty or not:\nPress 7 to check array is Full or not:\nPress 8 to Exit:\n");
scanf("%d",&n);
switch(n)
{
case 2:display();
break;
case 3:insert();
break;
case 4:del();
break;
case 5:merge();
break;
case 6:empty();
break;
case 7:full();
break;
case 8:exit(0);
}
}
while(n!=8);
}


int create()
{
printf("Enter size for Array you want to make:");
scanf("%d",&m);
printf("Enter No. of element for array you will enter:");
scanf("%d",&l);
printf("Enter %d elements:",l);
for(i=0;i<l;i++)
{
scanf("%d",&a[i]);
}
}


int display()
{
printf("Array:\n");
for(i=0;i<l;i++)
{
printf("%d\n",a[i]);
}
}


int insert()
{
int j,n;
if(m==l)
full();
else
{
printf("After which element, new element has to be inserted:");
scanf("%d",&n);
printf("Enter no. to be inserted:");
scanf("%d",&j);
for(i=l;i>n;i--)
{
a[i]=a[i-1];
}
a[i]=j;
l++;
}
}


int del()
{
int k,t;
if(l==0)
empty();
else
{
printf("Element to be deleted:");
scanf("%d",&k);
for(i=k-1;i<l;i++)
{
a[i]=a[i+1];
}
l--;
}
}


int merge()
{
printf("Enter No. of element for 2nd array:");
scanf("%d",&w);
printf("Enter %d elements for 2nd array:",w);
for(i=l;i<w+l;i++)
{
scanf("%d",&a[i]);
}
printf("Array:\n");
for(i=0;i<w+l;i++)
{
printf("%d\n",a[i]);
}
}


int empty()
{
if(l==0)
printf("Array is Empty\n");
else
printf("Array is not Empty\n");
}


int full()
{
if(m==l)
printf("Array is Full\n");
else
printf("Array is not Full\n");
}
