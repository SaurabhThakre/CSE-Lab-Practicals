#include<stdio.h>
#include<stdlib.h>
void linklist();
void insert();
struct node insert1(struct node *);
struct node insert2(struct node *);
struct node insert3(struct node *);
void delete();
struct node delete1(struct node *);
struct node delete2(struct node *);
struct node delete3(struct node *);
struct node display(struct node *);
struct node search(struct node *);
struct node sort(struct node *);
struct node merge(struct node *);
struct node reverse(struct node **);
void linkstk();
struct node push(struct node *);
struct node pop(struct node *);
struct node display1(struct node *);
void linkque();
struct node enque(struct node *);
struct node deque(struct node *);
struct node display2(struct node *);
struct node
{
int data;
struct node *next;
};

struct node *temp,*temp1,*x,*start=NULL,*start1=NULL,*start2=NULL,*hold,*w,*z,*top=NULL,*rear=NULL,*front=NULL,*v;

void main()
{
int a;
do
{
printf("Press for  1:Linked List , 2:Linked Stack , 3:Linked Queue , 0:Exit  :=>");
scanf("%d",&a);
switch(a)
{
case 1:linklist();
break;
case 2:linkstk();
break;
case 3:linkque();
break;
case 0:exit(0);
break;
default:printf("Enter Valid Input\n");
}
}
while(a!=0);
}



void linklist()
{
int a;
do
{
printf("Press for  1:Insert Element , 2:Delete Element , 3:Display Link List , 4:Search Element\n5:Sort Link List , 6:Merge Link List , 7:Reverse Link List , 0:Exit  :=>");
scanf("%d",&a);
switch(a)
{
case 1:insert();
break;
case 2:delete();
break;
case 3:display(start);
break;
case 4:search(start);
break;
case 5:sort(start);
break;
case 6:merge(start);
break;
case 7:reverse(&start);
break;
case 0:main();
break;
default:printf("Enter Valid Input\n");
}
}
while(a!=0);
}



void insert()
{
int a;
do
{
printf("Press for  1:Insert at Beginning , 2:Insert in Between , 3:Insert at End , 0:Exit  :=>");
scanf("%d",&a);
switch(a)
{
case 1:insert1(start);
break;
case 2:insert2(start);
break;
case 3:insert3(start);
break;
case 0:linklist();
break;
default:printf("Enter Valid Input\n");
}
}
while(a!=0);
}


struct node display(struct node *y)
{
printf("Linked List:\n");
while(y!=NULL)
{
printf("%d->",y->data);
y=y->next;
}
printf("NULL");
printf("\n");
}


struct node insert1(struct node *x)
{
int data1;

printf("Insert Element:");
scanf("%d",&data1);
x=(struct node *)malloc(sizeof(struct node));
x->data=data1;
if(start==NULL)
{
x->next=NULL;
}
else
{
x->next=start;
}
start=x;
}


struct node insert2(struct node *x)
{
int data1,pos,k=0;

printf("Insert Element:");
scanf("%d",&data1);
printf("Enter position:");
scanf("%d",&pos);
x=(struct node *)malloc(sizeof(struct node));
temp=start;
while(k<pos-2)
{
temp=temp->next;
if(temp==NULL)
{
printf("Node in list is less then position");
insert();
}
k++;
}
x->data=data1;
x->next=temp->next;
temp->next=x; 
}


struct node insert3(struct node *x)
{
int data1;
printf("Insert Element:");
scanf("%d",&data1);

x=(struct node *)malloc(sizeof(struct node));
x->data=data1;
x->next=NULL;
if(start==NULL)
{
start=x;
}
else
{
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=x; 
}
}

void delete()
{
int a;
do
{
printf("Press for  1:Delete at Beginning , 2:Delete in Between , 3:Delete at End , 0:Exit  :=>");
scanf("%d",&a);
switch(a)
{
case 1:delete1(start);
break;
case 2:delete2(start);
break;
case 3:delete3(start);
break;
case 0:linklist();
break;
default:printf("Enter Valid Input\n");
}
}
while(a!=0);
}


struct node delete1(struct node *x)
{
if(start==NULL)
{
printf("Linked List is Empty\n");
delete();
}
else
{
temp=start;
start=start->next;
free(temp);
}
}

struct node delete2(struct node *x)
{
int data1;

if(start==NULL)
{
printf("Linked List is Empty\n");
delete();
}
else
{
printf("Data to delete:");
scanf("%d",&data1);
hold=start;
while(hold->next->next!=NULL)
{
if(hold->next->data==data1)
{
temp=hold->next;
hold->next=temp->next;
free(temp);
delete();
}
hold=hold->next;
}
if(hold->next->next==NULL)
{
printf("Data not found\n");
delete();
}
}
}

struct node delete3(struct node *x)
{
if(start==NULL)
{
printf("Linked List is Empty\n");
delete();
}
else
{
hold=start;
while(hold->next->next!=NULL)
{
hold=hold->next;
}
temp=hold->next;
free(temp);
hold->next=NULL;
}
}


struct node search(struct node *x)
{
int data1,pos=0;
printf("Data to search:");
scanf("%d",&data1);

temp=start;
while(temp!=NULL)
{
if(temp->data==data1)
{
printf("Data is found at location %d\n",pos+1);
linklist();
}
temp=temp->next;
pos++;
}
if(temp==NULL)
printf("Data not found\n");
}


struct node sort(struct node *x)
{
int cnt=0,i=0,k;

hold=start;
while(hold!=NULL)
{
hold=hold->next;
cnt++;
}
while(i<cnt-1)
{
temp=start;
while(temp->next!=NULL)
{
if(temp->data>temp->next->data)
{
k=temp->data;
temp->data=temp->next->data;
temp->next->data=k;
}
temp=temp->next;
}
i++;
}

display(start);
}

struct node merge(struct node *x)
{
int a,data1;
printf("For 2nd Linked List\n");
do
{
printf("Press  1:Insert Element , 0:Exit  :=>");
scanf("%d",&a);
switch(a)
{
case 1:
{
printf("Insert Element:");
scanf("%d",&data1);

w=(struct node *)malloc(sizeof(struct node));
w->data=data1;
w->next=NULL;
if(start2==NULL)
{
start2=w;
}
else
{
temp=start2;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=w; 
}
}
break;
case 0:break;
default:printf("Enter Valid Input\n");
}
}
while(a!=0);

printf("2nd ");
display(start2);


temp1=start;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1=temp1->next;
x=temp1;

while(start2->next!=NULL)
{

x=(struct node *)malloc(sizeof(struct node));
x->data=start2->data;
x->next=NULL;
start2=start2->next;
if(start==NULL)
{
start=x;
}
else
{
temp=start;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=x;
}

}

temp=start;
x=(struct node *)malloc(sizeof(struct node));
x->data=start2->data;
while(temp->next!=NULL)
{
temp=temp->next;
}
x->next=NULL;
temp->next=x;


printf("Merged ");
display(start);
}



struct node reverse(struct node **x)
{

struct node *q,*r,*s;
q=*x;
r=NULL;
while(q!=NULL)
{
s=r;
r=q;
q=q->next;
r->next=s;
}
*x=r;
display(*x);
}


void linkstk()
{
int a;
do
{
printf("Press for  1:Push Element , 2:Pop Element , 3:Display Stack , 0:Exit  =>");
scanf("%d",&a);
switch(a)
{
case 1:push(top);
break;
case 2:pop(top);
break;
case 3:display1(top);
break;
case 0:main();
}
}
while(a!=0);
}

struct node push(struct node *z)
{
int data1;
printf("Enter Element to push in Stack:");
scanf("%d",&data1);
z=(struct node *)malloc(sizeof(struct node));
z->data=data1;
if(top==NULL)
{
z->next=NULL;
}
else
{
z->next=top;
}
top=z;
printf("%d is pushed in stack\n",data1);
}

struct node pop(struct node *z)
{
if(top==NULL)
{
printf("Stack is Empty\n");
}
else
{
temp=top;
printf("%d is poped from stack\n",top->data);
top=top->next;
free(temp);
}
}


struct node display1(struct node * y)
{
printf("Linked Stack:\n");
while(y!=NULL)
{
printf("%d->\n",y->data);
y=y->next;
}
printf("NULL");
printf("\n");
}



void linkque()
{
int a;
do
{
printf("Press for  1:Insert Element , 2:Delete Element , 3:Display Queue , 0:Exit  =>");
scanf("%d",&a);
switch(a)
{
case 1:enque(front);
break;
case 2:deque(front);
break;
case 3:display2(front);
break;
case 0:main();
}
}
while(a!=0);
}


struct node enque(struct node  *v)
{
int data1;
printf("Enter Element to Insert:");
scanf("%d",&data1);
v=(struct node *)malloc(sizeof(struct node));
v->data=data1;
v->next=NULL;
if(rear==NULL && front==NULL)
{
front=v;
rear=v;
}
else
{
rear->next=v;
rear=v;
}
}



struct node deque(struct node *v)
{
if(rear==NULL && front==NULL)
{
printf("Queue is Empty\n");
}
else
{
temp=front;
front=front->next;
free(temp);
}
}


struct node display2(struct node * y)
{
printf("Linked Queue:\n");
while(y!=NULL)
{
printf("%d->",y->data);
y=y->next;
}
printf("NULL");
printf("\n");
}
