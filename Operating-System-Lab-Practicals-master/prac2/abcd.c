#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<time.h>
clock_t start,end;
double t;
pid_t fork(void);

void main()
{
FILE *f1,*f2;
char ch;
int n;
long int i,a,sum,b,c,d[100000],t=0;
n=fork();
if(n>0)
{
wait(NULL);
printf("Parent:%d------%d\n",getppid(),n);
f1=fopen("abc.txt","r");
f2=fopen("abc1.txt","w");
while((ch=getc(f1))!=EOF)
{
putc(ch,f2);
}
fclose(f1);
fclose(f2);
printf("Content of abc.txt copied to abc1.txt\n");
}

else if(n==0)
{
printf("Child:%d------%d\n",getpid(),n);
printf("Hello World\n");
i=0;
for(b=100000;b>=0;b--)
{
d[i]=b;
i++;
}
for(i=0;i<99999;i++)
{
for(c=0;c<100000-i-1;c++)
{
if(d[c]>d[c+1])
{
t=d[c];
d[c]=d[c+1];
d[c+1]=t;
}
}
}
printf("Hello World 2\n");
}
else
printf("child terminated\n");
}
