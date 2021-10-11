main()
{
int i, j, k, n, temp, a[20], p=0;
printf("Enter total elements: ");
scanf("%d",&n);
printf("Enter array elements: ");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
for(i=1; i<n; i++)
{
temp = a[i];
j = i - 1;
while((temp<a[j]) && (j>=0))
{
a[j+1] = a[j];
j = j - 1;
}
a[j+1] = temp;
p++;
printf("\n After Pass %d: ", p);
for(k=0; k<n; k++)
printf(" %d", a[k]);
}
printf("\n Sorted List : ");
for(i=0; i<n; i++)
printf(" %d", a[i]);
}