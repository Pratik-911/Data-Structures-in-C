#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *newNode;
struct node *head=NULL;
struct node *temp;
struct node *preNode;




void beginInsert()
{
newNode= malloc(sizeof(struct node));
printf("\n Enter value\n");
scanf("%d",&newNode->data);
if (head == NULL)
{
head=newNode;
newNode->next=NULL;
}
else
{
newNode->next = head;
head= newNode;
}
printf("\n Inserted");
}

void endInsert()
{
newNode= malloc(sizeof(struct node));
printf("\n Enter value\n");
scanf("%d",&newNode->data);
newNode->next = NULL;
if (head==NULL)
head=newNode;
else
{
struct node *temp= head;
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
printf("\nNode inserted at end");

}

void locationInsert()
{
newNode= malloc(sizeof(struct node));
printf("\n Enter value\n");
scanf("%d",&newNode->data);
newNode->next = NULL;
if (head==NULL)
{
head=newNode;
newNode->next=NULL;
}
else
{
int loc, i;
printf("\n Enter location");
scanf("%d",&loc);
temp=head;
for (i=1;i<loc-1;i++)
temp=temp->next;
newNode->next=temp->next;
temp->next=newNode;	
}
printf("\nInserted\n");
}

void beginDelete()
{
if (head==NULL)
{
printf("\nUnderflow\n");
}
else
{
temp=head;
head=head->next;
printf("\nNode deleted: %d",temp->data);
free(temp);
}
}

void endDelete()
{
struct node *preNode;
if (head == NULL)
printf("\nUnderflow\n");
else
{
temp=head;
if (head->next == NULL)
{
printf("\nThe only node deleted: %d",temp->data);
head=NULL;
free(temp);
}
else
{
while (temp->next != NULL)
{
preNode = temp;
temp = temp->next;
}
printf("\nNode deleted: %d",temp->data);
free(temp);
preNode->next = NULL;
}
}
}

void locationDelete()
{
if (head == NULL)
printf("\nUnderflow\n");
else
{
if (head->next == NULL)
{
printf("\nThe only node deleted: %d",head->data);
free(head);
head=NULL;
}
else
{
int loc, i;
printf("\n Enter location");
scanf("%d",&loc);
temp=head;
for (i=1;i<loc;i++)
{
preNode=temp;
temp=temp->next;
}
printf("\nNode deleted: %d",temp->data);
preNode->next = temp->next;
free(temp);
}
}
}


void display()
{
struct node *temp=head;
if (head == NULL)
printf("\n Empty list");
else
{
printf("\nlist is: ");
while (temp != NULL)
{
printf("|%d|->",temp->data);
temp=temp->next;
}
}
}

int main()
{
beginInsert();
beginInsert();
endInsert();
display();
beginDelete();
beginDelete();
locationDelete();
display();
return 0;
}
