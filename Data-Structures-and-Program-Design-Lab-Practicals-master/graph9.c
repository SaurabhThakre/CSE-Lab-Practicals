#include<stdio.h>
#include<stdlib.h>
void create();
void dfsmat(int);
void bfsmat(int);
void display();
void enqueue(int);
int dequeue();
int empty();

typedef struct node
{
int data;
struct node *next;
}node;

void dfslist();
void DFS(int);
void readgraph();
void insert(int,int);

typedef struct Queue
{
int data[100];
int R,F;
}Queue;

void bfslist();
void enqueue1(Queue*,int);
int dequeue1(Queue*);
int empty1(Queue*);
void BFS(int);

node *G[20];
int adj[100][100],n,i,j,x,v[100],queue[100], front = -1,rear = -1,k=0,f,g;

void main()
{
int a;
do
{
printf("Press for\n1:DFS(Using Matrix)\n2:BFS(Using Matrix)\n3:DFS(Using List)\n4:BFS(Using List)\n0:Exit\n");
scanf("%d",&a);
switch(a)
{
case 1:
create();
display();
printf("DFS Traversal:\n");
dfsmat(0);
printf("\n");
break;
case 2:create();
display();
printf("BFS Traversal:\n");
bfsmat(0);
break;
case 3:dfslist();
printf("\n");
break;
case 4:bfslist();
break;
case 0:exit(0);
break;
default:printf("Invalid Input");
}
}
while(a!=0);
}

void create()
{
printf("Enter No. of Vertex for graph:");
scanf("%d",&n);
printf("Enter value for adjacency matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&adj[i][j]);
}
}

for(i=0;i<n;i++)
{
v[i]=0;
}
}

void dfsmat(int x)
{
int w;
printf("%d\t",x);
v[x]=1;
for(w=0;w<n;w++)
{
if(!v[w] && adj[x][w]==1)
{
dfsmat(w);
}
}

}

void display()
{
printf("Adjacency matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",adj[i][j]);
}
printf("\n");
}
}


void enqueue(int vertex)
{
if(rear == n-1)
printf("\nQueue is Full\n");
else
{
if(front == -1) 
front = 0;
rear = rear+1;
queue[rear] = vertex ;
}
}

int empty()
{
if(front == -1 || front > rear)
return 1;
else
return 0;
}


int dequeue()
{
int item;
if(front == -1 || front > rear)
{
printf("Queue is Empty\n");
exit(1);
}
item = queue[front];
front = front+1;
return item;
}


void bfsmat(int u)
{
int c;
enqueue(u);
v[u]=1;
while(!empty())
{
u = dequeue();
printf("%d\t",u);
for(c=0;c<n;c++)
{
if(v[c]==0 && adj[u][c]==1)
{
enqueue(c);
v[c]=1;
}
}
}

}


void dfslist()
{
int i;
readgraph();

for(i=0;i<n;i++)
v[i]=0;
printf("\nFirst Node/Vertex: ");
scanf("%d",&i);
DFS(i);
}
 
void DFS(int i)
{
node *p;
printf("\n%d",i);
p=G[i];
v[i]=1;
while(p!=NULL)
{
i=p->data;

if(!v[i])
DFS(i);
p=p->next;
}
}
 
void readgraph()
{
int i,vi,vj,edges;
printf("Enter number of vertices:");
   
scanf("%d",&n);

for(i=0;i<n;i++)
{
G[i]=NULL;

printf("Enter number of edges:");
scanf("%d",&edges);

for(i=0;i<edges;i++)
{
printf("Enter an edge(u,v):");
scanf("%d%d",&vi,&vj);
insert(vi,vj);
}
}
}
 
void insert(int vi,int vj)
{
node *p,*q;
q=(struct node *)malloc(sizeof(struct node));
q->data=vj;
q->next=NULL;

if(G[vi]==NULL)
G[vi]=q;
else
{

p=G[vi];

while(p->next!=NULL)
p=p->next;
p->next=q;
}
}

void bfslist()
{
int i;
readgraph();
printf("\nFirst Node/Vertex: ");
scanf("%d",&i);
BFS(i);
}

void BFS(int y)
{
int w,i,v[100];
Queue q;
int x;
node *p;
q.R=q.F=-1;            
for(i=0;i<n;i++)
v[i]=0;
enqueue1(&q,y);
printf("%d\n",y);
v[y]=1;
while(!empty1(&q))
{
y=dequeue1(&q);

for(p=G[y];p!=NULL;p=p->next)
{
w=p->data;
if(v[w]==0)
{
enqueue1(&q,w);
v[w]=1;
printf("%d\n",w);
}
}
}
}


int empty1(Queue *P)
{
if(P->R==-1)
return(1);
return(0);
}

void enqueue1(Queue *P,int x)
{
if(P->R==-1)
{
P->R=P->F=0;
P->data[P->R]=x;
}
else
{
P->R=P->R+1;
P->data[P->R]=x;
}
}

int dequeue1(Queue *P)
{
int x;
x=P->data[P->F];
if(P->R==P->F)
{
P->R=-1;
P->F=-1;
}
else
P->F=P->F+1;
return(x);
}

