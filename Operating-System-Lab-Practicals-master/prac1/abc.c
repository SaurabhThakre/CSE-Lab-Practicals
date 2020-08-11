#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
void main()
{
int fd,a,n;
char fdname[100],buf[100],data;
do
{
printf("Press for\n1:Creating file\t\t2:Writing file\n3:Reading file\t\t4:Appending file\n5:Reverse order\t\t6:Deleting file\n0:to exit   :->  ");
scanf("%d",&a);
switch(a)
{
case 1:printf("Enter the file name to create   :->  ");
scanf("%s",fdname);
fd=open(fdname,O_CREAT,0777);
break;
case 2:printf("File in write mode   :->  ");
fd=open(fdname,O_WRONLY,0777);
scanf("%s",buf);
write(fd,buf,strlen(buf));
close(fd);
break;
case 3:printf("File in read mode   :->  ");
fd=open(fdname,O_RDONLY);
read(fd,buf,sizeof(buf));
printf("%s\n",buf);
close(fd);
break;
case 4:printf("File in append mode:   :->  ");
fd=open(fdname,O_WRONLY|O_APPEND,0777);
scanf("%s",buf);
write(fd,buf,strlen(buf));
close(fd);
break;
case 5:printf("File in read mode in reverse order   :->  ");
fd=open(fdname,O_RDONLY);
n=lseek(fd,1,2);
while(n>0)
{        
read(fd,&data,1);  
printf("%c",data); 
lseek(fd,-2,1);  
n--;
}
printf("\n");
close(fd);
break;
case 6:printf("Enter file name to be deleted   :->  ");
scanf("%s",fdname);
unlink(fdname);
printf("File is deleted\n");
break;/*
case 7:
break;*/
case 0:exit(0);
default:printf("Invalid Input");
}
}
while(a!=0);
}
