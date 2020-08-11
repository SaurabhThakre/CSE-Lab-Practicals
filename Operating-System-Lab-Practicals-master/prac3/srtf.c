#include<stdio.h>

struct process
{
    int at;
    int bt; 
    int wt;
    int rt;
    int turn,comp;
};

struct process p[5];

void main()
{
int i,j,total=0,s,c=0,t,end;
float avgwt=0,turnt=0,avg,turns;
p[0].at=0; p[0].bt=4; p[0].wt=0; p[0].rt=4;
p[1].at=2; p[1].bt=2; p[1].wt=0; p[1].rt=2;
p[2].at=4; p[2].bt=3; p[2].wt=0; p[2].rt=3;
p[3].at=8; p[3].bt=1; p[3].wt=0; p[3].rt=1;

printf("\nProcess\tArrival Time\tBurst Time\tWaiting Time\tRemaining Time\n");

for(i=0;i<4;i++)
{
 printf("p%d\t%d\t\t%d\t\t%d\t\t%d\n",i,p[i].at,p[i].bt,p[i].wt,p[i].rt);
}

p[5].bt=9999;
for(t=0;c!=4;t++)
{
s=5;
for(i=0;i<4;i++)
{
if(p[i].at<=t && p[i].bt<p[s].bt && p[i].bt>0 )
s=i;
}
p[s].bt--;
if(p[s].bt==0)
{
c++;
end=t+1;
p[s].comp = end;
p[s].wt = end - p[s].at - p[s].rt;
p[s].turn = end - p[s].at;
}       
}

for(i=0;i<4;i++)
{
avg = avg + p[i].wt;
turns = turns + p[i].turn;
}

avgwt=avg/4;
turnt=turns/4;

printf("--------------------------------------\n");
printf("Total Waiting Time=%f\n",avg);
printf("Total Turnaround Time=%f\n",turns);
printf("Average Waiting Time=%f\n",avgwt);
printf("Average Turnaround Time=%f\n",turnt);
printf("--------------------------------------\n");

}

