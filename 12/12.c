#include <stdio.h>
#include <stdlib.h>
#define MAX 10
main()
{
int a[MAX], num, key, i;
char ans;
int create(int);
void linearprobing(int[], int, int);
void display(int[]);
printf("\nCollision handling by linear probing\n\n");
for(i=0; i<MAX; i++)
a[i] = -1;
do
{
printf("\n Enter number:");
scanf("%d", &num);
key = create(num);
linearprobing(a, key, num);
printf("\nwish to continue?(y/n):");
ans = getch();
} while( ans == 'y');
display(a);
}
int create(int num)
{
int key;
key = num % 10;
return key;
}
void linearprobing(int a[MAX], int key, int num)
{
int flag, i, count = 0;
void display(int a[]);
flag = 0;
if(a[key] == -1)
a[key] = num;
else
{
i=0;
while(i < MAX)
{
if(a[i] != -1)
count++;
i++;
}
if(count == MAX)
{
printf("hash table is full");
display(a);
getch();
exit(1);
}
for(i=key+1; i<MAX; i++)
if(a[i] == -1)
{
a[i] = num;
flag = 1;
break;
}
for(i=0; i<key && flag==0; i++ )
if(a[i] == -1)
{
a[i] = num;
flag = 1;
break;
}
}
}
void display(int a[MAX])
{
int i;
printf("\n Hash table is:");
for(i=0; i<MAX; i++)
printf("\n %d\t\t%d",i,a[i]);
}