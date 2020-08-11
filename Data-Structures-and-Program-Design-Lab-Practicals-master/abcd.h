#include<stdio.h>
#include<stdlib.h>

struct node
{
int key;
struct node *left,*right;
};



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

/*
void levelorder(struct node *root)
{
int i;
int h=height(root);
for(i=0;i<h;i++)
level(root,i);
}


void level(struct node *root,int l)
{
if(root==NULL)
return;
if(l==1)
printf("%d\t",root->key);
else if(l>1)
{
level(root->left,l-1);
level(root->right,l-1);
}
}
*/


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


void display(struct node *root)
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
case 0:
break;
default:printf("Invalid Input\n");
}
printf("\n");
}
while(a!=0);
}

