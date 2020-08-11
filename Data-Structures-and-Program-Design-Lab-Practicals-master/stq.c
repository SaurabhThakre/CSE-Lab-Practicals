#include<stdio.h>
#include<stdlib.h>
void stack();
void push(int*,int*);
void pop(int*,int*);
void display(int*,int*);
void queue();
void enque(int*,int*,int*);
void deque(int*,int*,int*);
void display1(int*,int*,int*);
void cque();
void ceque(int*,int*,int*);
void cdque(int*,int*,int*);
void display2(int*,int*,int*);
int arr[10000],t,n;
void main()
{
int a;
do
{
printf("Press for:\n1:Stacks\n2:Queue\n3:Circular Queue\n0:Exit\n");
scanf("%d",&a);
switch(a)
{
case 1:stack();
break;
case 2:queue();
break;
case 3:cque();
break;
case 0:exit(0);
}
}
while(a!=0);
}

void stack()
{
int b,p,top=-1;
n=0;
printf("Enter Size for Stack:");
scanf("%d",&n);
for(p=0;p<n;p++)
{
arr[p]=0;
}
do
{
printf("Press for:\n1:Push Element\n2:Pop Element\n3:Display Stack\n0:Exit\n");
scanf("%d",&b);
switch(b)
{
case 1:push(arr,&top);
break;
case 2:pop(arr,&top);
break;
case 3:display(arr,&top);
break;
case 0:main();
}
}
while(b!=0);
}

void push(int*arr,int*top)
{
int t;
if(*top==n-1)
{
printf("Stack is Full\n");
}
else
{
printf("Enter Element to push in Stack:");
scanf("%d",&t);
(*top)++;
arr[*top]=t;
printf("%d is pushed in stack\n",t);
}
}

void pop(int*arr,int*top)
{
if(*top==-1)
{
printf("Stack is Empty\n");
}
else
{
printf("%d is poped from stack\n",arr[*top]);
(*top)--;
}
}

void display(int*arr,int*top)
{
int i;
printf("Stack:\n");
for(i=*top;i>=0;i--)
{
printf("%d\n",arr[i]);
}
}

void queue()
{
int l,c,front=-1,rear=-1;
n=0;
printf("Enter Size for Queue:");
scanf("%d",&n);
for(l=0;l<n;l++)
{
arr[l]=0;
}
do
{
printf("Press for:\n1:Insert Element\n2:Delete Element\n3:Display Queue\n0:Exit\n");
scanf("%d",&c);
switch(c)
{
case 1:enque(arr,&front,&rear);
break;
case 2:deque(arr,&front,&rear);
break;
case 3:display1(arr,&front,&rear);
break;
case 0:main();
}
}
while(c!=0);
}

void enque(int*arr,int*front,int*rear)
{
int p;
if(*rear==n-1)
{
printf("Queue is Full\n");
}
else if(*front==-1)
{
printf("Enter Element to Insert:");
scanf("%d",&p);
*front=0;
(*rear)++;
arr[*rear]=p;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}
else
{
printf("Enter Element to Insert:");
scanf("%d",&p);
(*rear)++;
arr[*rear]=p;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}
}

void deque(int*arr,int*front,int*rear)
{
if(*front==*rear)
{
if(*front==-1)
{
printf("Queue is Empty\n");
}
else
{
*front=-1;
*rear=-1;
printf("Now Queue is Empty\n");
}
}
else
{
(*front)++;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}
}

void display1(int*arr,int*front,int*rear)
{
int j;
printf("Queue:\n");
for(j=*front;j<=*rear;j++)
{
printf("%d\t",arr[j]);
}
printf("\n");
}

void cque()
{
int d,m,front=-1,rear=-1;
n=0;
printf("Enter Size for Circular Queue:");
scanf("%d",&n);
for(m=0;m<n;m++)
{
arr[m]=0;
}
do
{
printf("Press for:\n1:Insert Element\n2:Delete Element\n3:Display Circular Queue\n0:Exit\n");
scanf("%d",&d);
switch(d)
{
case 1:ceque(arr,&front,&rear);
break;
case 2:cdque(arr,&front,&rear);
break;
case 3:display2(arr,&front,&rear);
break;
case 0:main();
}
}
while(d!=0);
}

void ceque(int*arr,int*front,int*rear)
{
int q;
if(n!=2&&n!=1)
{
if(((*front==0)&&(*rear==n-1))||(*rear==(*front-1)%(n-1)))
{
printf("Queue is Full\n");
return;
}
}
else
{
if(((*front==0)&&(*rear==n-1))||(*rear==(*front-1)))
{
printf("Queue is Full\n");
return;
}
}
if(*front==-1 && *rear==-1)
{
*front=0;
*rear=0;
}
else if(*rear==n-1 && *front>0)
{
*rear=0;
}
else
{
(*rear)++;
}
printf("Enter Element to Insert:");
scanf("%d",&q);
arr[*rear]=q;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}

void cdque(int*arr,int*front,int*rear)
{
if(*front==*rear)
{
if(*front==-1)
{
printf("Circular Queue is Empty\n");
}
else
{
*front=-1;
*rear=-1;
printf("Now Circular Queue is Empty\n");
}
}
else
{
if(*front==n-1)
{
*front=0;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}
else if(*front<*rear)
{
(*front)++;
printf("Front=%d\nRear=%d\n",arr[*front],arr[*rear]);
}
}
}

void display2(int*arr,int*front,int*rear)
{
int k;
printf("Circular Queue:\n");
if(*rear>=*front)
{
for(k=*front;k<=*rear;k++)
{
printf("%d\t",arr[k]);
}
}
else
{
for(k=*front;k<n;k++)
{
printf("%d\t",arr[k]);
}
for(k=0;k<=*rear;k++)
{
printf("%d\t",arr[k]);
}
}
printf("\n");
}


