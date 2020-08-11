#include<stdio.h>
#include<stdlib.h>

struct dnode
{
	struct dnode *lpoint;
	int data;
	struct dnode *rpoint;	
};
void bsort(int);
int append(int num);
void display(struct dnode*);

struct dnode *start=NULL;
void main()
{
	
int n=0,a,m;

	do{
	printf("press 1 for insertion  press 2 for sorting  press 0 for exit :");
	scanf("%d",&m);
	switch(m)
	{
		case 1:printf("enter the element to be inserted:");
		       scanf("%d",&a);
		       n++;
		       append(a);
		       display(start);
		       break;
		case 2:printf("sorted list:\n");
		       bsort(n);
		       display(start);
		       break;
		case 0:exit(0);
	}
    }while(m!=0);
}


int append(int num)
{
	struct dnode *r,*q=start;

	if(start==NULL)
	{
		start=(struct dnode*)malloc(sizeof (struct dnode));
		start->lpoint=NULL;
		start->data=num;
		start->rpoint=NULL;
	}
	else
	{
		while(q->rpoint!=NULL)
		q=q->rpoint;
		
		r=(struct dnode*)malloc(sizeof(struct dnode));
		r->data=num;
		r->rpoint=NULL;
		r->lpoint=q;
		q->rpoint=r;
	}
	return 0;
}


void bsort(int n)
{
  int i,t; 
    struct dnode *temp; 
        
        if(start==NULL)
        return;
        
        temp=start;
        for(i=0;i<n-1;i++)
        {
        while (temp->rpoint !=NULL) 
        { 
            if ((temp->data )> ((temp->rpoint)->data) )
            {  
                t=temp->data;
               temp->data=((temp->rpoint)->data) ;
               ((temp->rpoint)->data) =t;
             
            } 
           temp = temp->rpoint; 
        } 
     temp=start;
}
} 


void display(struct dnode *q)
{
	while(q!=NULL)
	{
		printf("%d\t",q->data);
		q=q->rpoint;
	}
	printf("\n");
}
	
