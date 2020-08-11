#include<stdio.h> 
#include<semaphore.h>
#include<pthread.h>
#include<stdlib.h>

pthread_t tidW[20],tidR[20];
sem_t wrt,mutex;
int counter;
int buffer;

void initialize()
{
    sem_init(&mutex,0,1);
    sem_init(&wrt,0,1);
    counter=0;
}

void writetobuf(int item)
{
    buffer=item;
}

int readfrombuf()
{
    return(buffer);
}

void* writer (void *param)
{
 int data;
    sem_wait(&wrt);
    /*this is writing section*/
   printf("writer has to write item");
   scanf("%d",&data);
    printf("\nWriter has written item: %d\n",data);
    writetobuf(data++);
    sem_post(&wrt);
}

void* reader (void *param)
{
    int waittime,count=0,item;
    waittime=rand()%5;
    sem_wait(&mutex);
    count++;
    if(count == 1)
        sem_wait(&wrt);
    sem_post(&mutex);
    /*this is reading section*/
    item=readfrombuf();
    printf("\nReader is reading item: %d\n",item);
    sem_wait(&mutex);
    count--;
    if(count==0)
        sem_post(&wrt);
        sem_post(&mutex);
}

int main()
{
    int n1,n2,i=0,j=1;
    initialize();
    n1=1;
    printf("\nEnter the no of reader: ");
    scanf("%d",&n2);
    
    pthread_create(&tidW[i],NULL,writer,NULL);
    for(i=0;i<n2;i++)
        pthread_create(&tidR[i],NULL,reader,NULL);
 
    pthread_create(&tidW[j],NULL,writer,NULL);

    for(i=0;i<2;i++)    
        pthread_join(tidW[i],NULL);
    for(i=0;i<n2;i++)
        pthread_join(tidR[i],NULL);

    sem_destroy(&wrt);
    sem_destroy(&mutex);
    exit(0);
}

/*//op
Enter the no of reader: 2
writer has to write item2

Writer has written item: 2

Reader is reading item: 2

Reader is reading item: 2
writer has to write item1

Writer has written item: 1
*/
