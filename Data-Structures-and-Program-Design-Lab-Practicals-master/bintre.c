#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
struct node* insert1(struct node *,int);
void display();
struct node in(struct node *);
struct node pre(struct node *);
struct node post(struct node *);
int height(struct node *);
int count(struct node *);
struct node* arrlist(struct node *,int);
struct node* insert2(int);

struct node
{
int key;
struct node *left,*right;
};

struct node *x,*root=NULL,*temp;
int arr[7]={11,12,13,14,15,16,17},i=0;

void main()
{
int a;
do
{
printf("Press for\n1:Create Tree directly\n2:Creation of tree using Array list\n0:Exit\n");
scanf("%d",&a);
switch(a)
{
case 1:insert();
break;
case 2:arrlist(root,i);
root=temp;
create();
break;
case 0:exit(0);
break;
default:printf("Invalid Input\n");
}
}
while(a!=0);
}


void create()
{
int a;
do
{
printf("Press for  1:Diplay Tree , 2:Height of tree , 3:Total no. of Nodes in tree , 0:Exit =>");
scanf("%d",&a);
switch(a)
{
case 1:display();
break;
case 2:height(root);
printf("Height of Tree:%d\n",height(root)-1);
break;
case 3:count(root);
printf("Total no. of Nodes in Tree:%d\n",count(root)-1);
break;
case 0:main();
break;
default:printf("Invalid Input\n");
}
}
while(a!=0);
}

void insert()
{
x=insert1(x,1);
root=x;
x->left=insert1(x,2);
x->right=insert1(x,3);
x->left->left=insert1(x,4);
x->left->right=insert1(x,5);
x->right->left=insert1(x,6);
x->right->right=insert1(x,7);
create();
}


struct node* insert1(struct node *x,int data)
{
x=(struct node *)malloc(sizeof(struct node));
x->key = data;
x->left = NULL;
x->right = NULL;
return(x);
}


void display()
{
int a;
do
{
printf("Press for  1:In-order , 2:Pre-order , 3:Post-order , 0:Exit =>");
scanf("%d",&a);
switch(a)
{
case 1:in(root);
break;
case 2:pre(root);
break;
case 3:post(root);
break;
case 0:create();
break;
default:printf("Invalid Input\n");
}
printf("\n");
}
while(a!=0);
}

struct node in(struct node *root)
{
if(root)
{
in(root->left);
printf("%d\t",root->key);
in(root->right);
}
}

struct node pre(struct node *root)
{
if(root)
{
printf("%d\t",root->key);
pre(root->left);
pre(root->right);
}
}

struct node post(struct node *root)
{
if(root)
{
post(root->left);
post(root->right);
printf("%d\t",root->key);
}
}

int height(struct node *root)
{
int l,r;
if(root==NULL)
return 0;
else
{
l=height(root->left);
r=height(root->right);
if(l>r)
return(l+1);
else
return(r+1);
}
}

int count(struct node *root)
{
int c=1;
if(root==NULL)
return 0;
if(root->left != NULL)
{
if(root->left->left || root->left->right != NULL)
c=c+count(root->left);
}
if(root->right != NULL)
{
if(root->right->left || root->right->right != NULL)
c=c+count(root->right);
}
return c;
}

struct node* arrlist(struct node *root,int i)
{
if(i<7)
{
x=insert2(arr[i]);
if(i==0)
{
temp=x;
}
root=x;
root->left=arrlist(root->left,2*i+1);
root->right=arrlist(root->right,2*i+2);
}
return root;
}


struct node* insert2(int data)
{
x=(struct node *)malloc(sizeof(struct node));
x->key = data;
x->left = NULL;
x->right = NULL;
return(x);
}
