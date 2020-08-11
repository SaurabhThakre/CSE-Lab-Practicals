#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char a[100],f[100],c;

printf("Enter the filename to open for reading:\n");
scanf("%s",f);
f1=fopen(f,"r");
if(f1==NULL)
{
printf("Cannot open file %s\n",f);
exit(0);
}
printf("Enter the filename to open for writing:\n");
scanf("%s",f);
f2=fopen(f,"w");
if(f2==NULL)
{
printf("Cannot open file %s \n",f);
exit(0);
}
c=fgetc(f1);
while(c!=EOF)
{
fputc(c,f2);
c=fgetc(f1);
}
printf("Contents copied to %s\n",f);

printf("Opening the file %s in read mode\n",f);
f2=fopen(f,"r");
printf("Reading the file %s:\n",f);
while(fgets(a,100,f2)!=NULL)
{
printf("%s",a);
}

fclose(f1);
fclose(f2);
return 0;
}




