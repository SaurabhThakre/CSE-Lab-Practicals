#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
void main()
{
int fd,fd1,a;
char fdname[100],buf1[100];
struct stat buf;
do
{
printf("Press for\n1:Status of file using stat()\n2:Status of file using fstat()\n3:Duplicate file using dup()\n0:to exit   :->  ");
scanf("%d",&a);
switch(a)
{
case 1:printf("Enter the file name to see status   :->  ");
scanf("%s",fdname);
stat(fdname,&buf);
printf("-------------------------------------------------------\n");
printf("Name of file:%s\n",fdname);
printf("Last file access time:%ld\n",buf.st_atime);
printf("Last file modification time:%ld\n",buf.st_atime);
printf("ID of device containing file:%ld\n",buf.st_dev);
printf("user ID of owner:%o\n",buf.st_uid);
printf("group ID of owner:%o\n",buf.st_gid);
printf("device ID:%ld\n",buf.st_rdev);
printf("total size,in bytes:%ld\n",buf.st_size);
printf("-------------------------------------------------------\n");
break;
case 2:printf("Enter the file name to see status   :->  ");
scanf("%s",fdname);
fd=open(fdname,O_RDONLY);
fstat(fd,&buf);
printf("-------------------------------------------------------\n");
printf("Name of file:%s\n",fdname);
printf("Last file access time:%ld\n",buf.st_atime);
printf("Last file modification time:%ld\n",buf.st_atime);
printf("ID of device containing file:%ld\n",buf.st_dev);
printf("user ID of owner:%o\n",buf.st_uid);
printf("group ID of owner:%o\n",buf.st_gid);
printf("device ID:%ld\n",buf.st_rdev);
printf("total size,in bytes:%ld\n",buf.st_size);
printf("-------------------------------------------------------\n");
break;
case 3:
printf("Enter the file name to duplicate   :->  ");
scanf("%s",fdname);
fd=open(fdname,O_RDONLY);
fd1=dup(fd);
close(fd);
fd1=open(fdname,O_RDONLY);
read(fd1,buf1,sizeof(buf1));
printf("%s\n",buf1);
close(fd1);
break;
case 0:exit(0);
default:printf("Invalid Input");
}
}
while(a!=0);
}
