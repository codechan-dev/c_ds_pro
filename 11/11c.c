#include <stdio.h>
#include <conio.h>
main()
{
int a[50],i, j, n, t;
clrscr();
printf("Enter number of elements : ");
scanf("%d", &n);
printf("Enter Array Elements \n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
for(i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
{
if (a[i] > a[j])
{
t = a[i];
a[i] = a[j];
a[j] = t;
}
}
}
printf("\n Elements in Sorted order :");
for(i=0; i<n; i++)
printf("%d ", a[i]);
getch();
}