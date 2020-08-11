#include<stdio.h>
#include<stdlib.h>
#include"abcd.h"
struct node* inserts(struct node*,int);
struct node* inserts1(struct node*,int);
struct node* delete(struct node*,int);
struct node* large(struct node*);

struct node *x,*root=NULL,*temp;

void main()
{
int a,data;
do
{
printf("Press for  1:Insert node , 2:Delete Node , 3:Diplay Tree , 4:Height of tree , 5:No. of Internal Nodes , 0:Exit =>");
scanf("%d",&a);
switch(a)
{
case 1:printf("Enter Data:");scanf("%d",&data);
inserts(root,data);
break;
case 2:printf("Enter Data:");scanf("%d",&data);
delete(root,data);
break;
case 3:display(root);
break;
case 4:height(root);
printf("Height of Tree:%d\n",height(root)-1);
break;
case 5:count(root);
printf("Total no. of Nodes in Tree:%d\n",count(root));
break;
case 0:exit(0);
break;
default:printf("Invalid Input\n");
}
}
while(a!=0);
}

struct node* inserts(struct node* x, int key)
{
if (x == NULL)
{
x = (struct node*)malloc(sizeof(struct node));
root=x;
x->key = key;
x->left = x->right = NULL;
return x;
}
if (key < x->key)
x->left = inserts1(x->left, key);
else if (key > x->key)
x->right = inserts1(x->right, key);
return x;
}

struct node* inserts1(struct node* x,int key)
{
if (x == NULL)
{
x = (struct node*)malloc(sizeof(struct node));
x->key = key;
x->left = x->right = NULL;
return x;
}
if (key < x->key)
x->left = inserts1(x->left, key);
else if (key > x->key)
x->right = inserts1(x->right, key);
return x;
}


struct node* delete(struct node* x,int key)
{
if(x==NULL)
{
printf("Data not found\n");
return NULL;
}
else if(key < x->key)
x->left=delete(x->left,key);
else if(key > x->key)
x->right=delete(x->right,key);
else 
{
if(x->left==NULL && x->right==NULL)
{
x=NULL;
}
else if(x->right==NULL)
{
x=x->left;
}
else if(x->left==NULL)
{
x=x->right;
}
else
{
temp=large(x->left);
x->key=temp->key;
x->left=delete(x->left,temp->key);
}
}
return x;
}


struct node* large(struct node* x)
{
if(x==NULL || x->right==NULL)
return x;
else
return large(x->right);
}
