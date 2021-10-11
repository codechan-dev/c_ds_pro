#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <alloc.h>
struct node
{
int label;
struct node *next;
};
main()
{
int ch=0;
int k;
struct node *h, *temp, *head;
/* Head node construction */
head = (struct node*) malloc(sizeof(struct node));
head->next = NULL;
while(1)
{
printf("\n Queue using Linked List \n");
printf("1->Insert ");
printf("2->Delete ");
printf("3->View ");
printf("4->Exit \n");
printf("Enter your choice : ");
scanf("%d", &ch);
switch(ch)
{
case 1:
/* Create a new node */
temp=(struct node *)(malloc(sizeof(struct node)));
printf("Enter label for new node : ");
scanf("%d", &temp->label);
/* Reorganize the links */
h = head;
while (h->next != NULL)
h = h->next;
h->next = temp;
temp->next = NULL;
break;
case 2:
/* Delink the first node */
h = head->next;
head->next = h->next;
printf("Node deleted \n");
free(h);
break;
case 3:
printf("\n\nHEAD -> ");
h=head;
while (h->next!=NULL)
{
h = h->next;
printf("%d -> ",h->label);
}
printf("NULL \n");
break;
case 4:
exit(0);
}
}
}