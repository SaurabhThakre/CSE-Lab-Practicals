#include <stdio.h>
void result();
void sort();
int i,j;
struct s
{
int rno;
char n[10];
int m1,m2,m3,m4,m5;
float a;
}
s[5],*ptr;
void main()
{
ptr=s;
printf("Enter the Student rollno,name,marks of 5 subject:\n");
for (i=0;i<5;i++)
{
scanf("%d%s%d%d%d%d%d" ,&ptr->rno,&ptr->n[i],&ptr->m1,&ptr->m2,&ptr->m3,&ptr->m4,&ptr->m5);
ptr++;
} 
result();
}

void result()
{
for (i=0;i<5;i++)
{
s[i].a=((s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5);
if(s[i].m1<40||s[i].m2<40||s[i].m3<40||s[i].m4<40||s[i].m5<40||s[i].a<50)
printf("Student Roll No.%d is Failed\n",s[i].rno);
else
printf("Student Roll No.%d is Passed\n",s[i].rno);
ptr++;
}
sort();
}
 
 
void sort()
{
struct s z;
for(i=0;i<3;i++)
{
for(j=0;j<3-i;j++)
{
if(s[j].a<s[j+1].a)
{
z=s[j];
s[j]=s[j+1];
s[j+1]=z;
}
}
}
printf("Top 3 Students of Class:\n");
for(i=0;i<3;i++)
{
printf("Roll No:%d\t Aggrregate:%f\n",s[i].rno,s[i].a);
}

}
 
 
