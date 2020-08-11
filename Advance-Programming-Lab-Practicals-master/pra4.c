#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char a[100],f[100],c,ch;
int i=0;

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

while(1)
{
ch=fgetc(f1);
i++;
if(i==25)
{
fputc(ch,f2);
}
if(ch=='\n')
{
i=0;
} 
if(ch==EOF)
break;
}


printf("Contents copied to %s\n",f);

fclose(f1);
fclose(f2);
return 0;
}

