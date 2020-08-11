#include<stdio.h>
#include<string.h>
int main()
{
FILE *f1;
char a[50];
printf("Opening the file f1234.txt in write mode");
f1=fopen("f1234.txt","w");
if(f1==NULL)
{
printf("Could not open file f1234.txt");
return 1;
}
printf("\nEnter some text from keyboard to write in the file f1234.txt");
scanf("%s",a);
if(strlen(a)>0)
{
fputs(a,f1);
fputs("\n",f1);
}
printf("Closing the file f1234.txt\n");
fclose(f1);

printf("Opening the file test.c in read mode\n");
f1=fopen("test.c", "r");
if(f1== NULL)
{
printf("Could not open file test.c\n");
return 1;
}
printf("Reading the file test.c\n" );
while(fgets(a,50,f1)!=NULL)
printf("%s",a) ;
printf("Closing the file test.c\n");
fclose(f1);
return 0;
}
