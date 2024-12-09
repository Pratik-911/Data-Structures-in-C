#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *newNode;
struct node *front=NULL;
struct node *temp;
struct node *preNode;





void enqueue()
{
newNode= malloc(sizeof(struct node));
printf("\n Enter value\n");
scanf("%d",&newNode->data);
newNode->next = NULL;
if (front==NULL)
front=newNode;
else
{
struct node *temp= front;
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
printf("\nElement inserted ");

}


void dequeue()
{
if (front==NULL)
{
printf("\nUnderflow\n");
}
else
{
temp=front;
front=front->next;
printf("\nElement deleted: %d",temp->data);
free(temp);
}
}


void display()
{
struct node *temp=front;
if (front == NULL)
printf("\n Empty queue");
else
{
printf("\nQueue is: ");
while (temp != NULL)
{
printf("|%d|->",temp->data);
temp=temp->next;
}
}
}

int main()
{
int ch;

do
{
printf("\n 1:Enqueue \n 2:Dequeue \n 3:Display \n 4:Exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
}
}while(ch!=4);
return 0;
}
