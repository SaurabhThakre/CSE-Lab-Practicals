#include<stdio.h>
#include<stdlib.h>
struct node listtwo(struct node *);
struct node listthree(struct node *);
struct node display(struct node *);

struct node
{
int data;
struct node *next;
};

int n;
struct node *temp,*temp1,*temp2,*x,*w,*y,*z,*v,*start2=NULL,*start1=NULL,*start=NULL;


void main()
{
int data1,i;
printf("Enter Size:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
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

printf("Linked List 1:\n");
display(start);
printf("Linked List 2:\n");
listtwo(start);
printf("Linked List 3:\n");
listthree(start);
}


struct node listtwo(struct node *w)
{
if(n%2==0)
{

while(w!=NULL)
{

z=(struct node *)malloc(sizeof(struct node));
z->data=w->data;
z->next=NULL;
w=w->next;
w=w->next;
if(start1==NULL)
{
start1=z;
}
else
{
temp1=start1;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=z;
}

}

}


else
{
while(w->next!=NULL)
{

z=(struct node *)malloc(sizeof(struct node));
z->data=w->data;
z->next=NULL;
w=w->next;
w=w->next;
if(start1==NULL)
{
start1=z;
}
else
{
temp1=start1;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=z;
}

}

temp1=start1;
z=(struct node *)malloc(sizeof(struct node));
z->data=w->data;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
z->next=NULL;
temp1->next=z;

}


display(start1);

}




struct node listthree(struct node *w)
{
w=w->next;
if(n%2==0)
{

while(w->next!=NULL)
{

v=(struct node *)malloc(sizeof(struct node));
v->data=w->data;
v->next=NULL;
w=w->next;
w=w->next;
if(start2==NULL)
{
start2=v;
}
else
{
temp2=start2;
while(temp2->next!=NULL)
{
temp2=temp2->next;
}
temp2->next=v;
}

}

temp2=start2;
v=(struct node *)malloc(sizeof(struct node));
v->data=w->data;
while(temp2->next!=NULL)
{
temp2=temp2->next;
}
v->next=NULL;
temp2->next=v;

}


else
{
while(w!=NULL)
{

v=(struct node *)malloc(sizeof(struct node));
v->data=w->data;
v->next=NULL;
w=w->next;
w=w->next;
if(start2==NULL)
{
start2=v;
}
else
{
temp2=start2;
while(temp2->next!=NULL)
{
temp2=temp2->next;
}
temp2->next=v;
}

}

}


display(start2);

}


struct node display(struct node *y)
{
while(y!=NULL)
{
printf("%d->",y->data);
y=y->next;
}
printf("NULL");
printf("\n");
}




