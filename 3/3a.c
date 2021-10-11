#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <alloc.h>
#include <string.h>
struct node
{
int label;
struct node *next;
};
main()
{
int ch, fou=0;
int k;
struct node *h, *temp, *head, *h1;
/* Head node construction */
head = (struct node*) malloc(sizeof(struct node));
head->label = -1;
head->next = NULL;
while(-1)
{
clrscr();
printf("\n\n SINGLY LINKED LIST OPERATIONS \n");
printf("1->Add ");
printf("2->Delete ");
printf("3->View ");
printf("4->Exit \n");
printf("Enter your choice : ");
scanf("%d", &ch);
switch(ch)
{
/* Add a node at any intermediate location */
case 1:
printf("\n Enter label after which to add : ");
scanf("%d", &k);
h = head;
fou = 0;
if (h->label == k)
fou = 1;
while(h->next != NULL)
{
if (h->label == k)
{
fou=1;
break;
}
h = h->next;
}
if (h->label == k)
fou = 1;
if (fou != 1)
printf("Node not found\n");
else
{
temp=(struct node *)(malloc(sizeof(struct node)));
printf("Enter label for new node : ");
scanf("%d", &temp->label);
temp->next = h->next;
h->next = temp;
}
break;
/* Delete any intermediate node */
case 2:
printf("Enter label of node to be deleted\n");
scanf("%d", &k);
fou = 0;
h = h1 = head;
while (h->next != NULL)
{
h = h->next;
if (h->label == k)
{
fou = 1;
break;
}
}
if (fou == 0)
printf("Sorry Node not found\n");
else
{
while (h1->next != h)
h1 = h1->next;
h1->next = h->next;
free(h);
printf("Node deleted successfully \n");
}
break;
case 3:
printf("\n\n HEAD -> ");
h=head;
while (h->next != NULL)
{
h = h->next;
printf("%d -> ",h->label);
}
printf("NULL");
break;
case 4:
exit(0);
}
}
}
