#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2;
char a[100],f[100],c,ch;
int i=0,m=0,n=0,o=0,p=0,q=0;

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

if(ch=='\n')
{
m++;
}

if(ch==' ')
{
n++;
}

if(ch=='a'||'e'||'i'||'o'||'u')
{
o++;
}

if(ch>=48&&ch<=57)
{
p++;
}

else
{
q++;
}

if(i%2!=0)
{
fputc(ch,f2);
}

if(ch==EOF)
break;
}

printf("No. of Characters:%d\nNo. of Lines:%d\nNo. of Spaces:%d\nNo. of Vowels:%d\nNo. of Digits:%d\nNo. of Special Characters:%d\n",i,m,n,o,p,q);

printf("Alternate Characters copied to %s\n",f);

fclose(f1);
fclose(f2);
return 0;
}

