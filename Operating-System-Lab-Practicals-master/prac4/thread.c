#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/shm.h>

#define buf_size 100

int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

main(void)
{
pid_t pid;
int i;
int *total;
char b[buf_size];

int segment_id=shmget(IPC_PRIVATE,2,S_IRUSR|S_IWUSR);

total=(int*)shmat(segment_id,NULL,0);
*total=0;
pid=fork();
if(pid==0)
{
for(i=10;i<20;i++)
*total=*total+a[i];

sprintf(b,"\n child total = %d \n\n",*total);
write(1,b,strlen(b));
}
else
{
for(i=0;i<10;i++)
*total=*total+a[i];

sprintf(b,"\n parent total = %d \n\n",*total);
write(1,b,strlen(b));
pid=wait(NULL);
if(pid!=-1)
printf("\n total of all numbers = %d \n\n",*total);

shmdt(total);

}
}
