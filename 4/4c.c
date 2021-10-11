#include <stdio.h>
struct process
{
int pid;
int btime;
int wtime;
int ttime;
} p[10];
void main()
{
int i,j,k,n,ttur,twat;
float awat,atur;
printf("Enter no. of process : ");
scanf("%d", &n);
for(i=0; i<n; i++)
{
printf("Burst time for process P%d (in ms) : ",(i+1));
scanf("%d", &p[i].btime);
p[i].pid = i+1;
}
p[0].wtime = 0;
for(i=0; i<n; i++)
{
p[i+1].wtime = p[i].wtime + p[i].btime;
p[i].ttime = p[i].wtime + p[i].btime;
}
ttur = twat = 0;
for(i=0; i<n; i++)
{
ttur += p[i].ttime;
twat += p[i].wtime;
}
awat = (float)twat / n;
atur = (float)ttur / n;
printf("\n FCFS Scheduling\n\n");
for(i=0; i<28; i++)
printf("-");
printf("\nProcess B-Time T-Time W-Time\n");
for(i=0; i<28; i++)
printf("-");
for(i=0; i<n; i++)
printf("\n P%d\t%4d\t%3d\t%2d",
p[i].pid,p[i].btime,p[i].ttime,p[i].wtime);
printf("\n");
for(i=0; i<28; i++)
printf("-");
printf("\n\nAverage waiting time : %5.2fms", awat);
printf("\nAverage turn around time : %5.2fms\n", atur);
printf("\n\nGANTT Chart\n");
printf("-");
for(i=0; i<(p[n-1].ttime + 2*n); i++)
printf("-");
printf("\n");
printf("|");
for(i=0; i<n; i++)
{
k = p[i].btime/2;
for(j=0; j<k; j++)
printf(" ");
printf("P%d",p[i].pid);
for(j=k+1; j<p[i].btime; j++)
printf(" ");
printf("|");
}
printf("\n");
printf("-");
for(i=0; i<(p[n-1].ttime + 2*n); i++)
printf("-");
printf("\n");
printf("0");
for(i=0; i<n; i++)
{
for(j=0; j<p[i].btime; j++)
printf(" ");
printf("%2d",p[i].ttime);
}
}