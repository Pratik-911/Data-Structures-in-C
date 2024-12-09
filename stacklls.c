#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};
struct node *newNode;
struct node *top=NULL;
struct node *temp;
struct node *preNode;




void push()
{
newNode= malloc(sizeof(struct node));
printf("\n Enter value\n");
scanf("%d",&newNode->data);
if (top == NULL)
{
top=newNode;
newNode->next=NULL;
}
else
{
newNode->next = top;
top= newNode;
}
printf("\n Inserted");
}


void pop()
{
if (top==NULL)
{
printf("\nUnderflow\n");
}
else
{
temp=top;
top=top->next;
printf("\nElement deleted: %d",temp->data);
free(temp);
}
}



void display()
{
struct node *temp=top;
if (top == NULL)
printf("\n Empty stack");
else
{
printf("\nStack is: ");
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
printf("\n 1:push \n 2:pop \n 3:DISPLAY \n 4:EXIT");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:exit(0);
}
}while(ch!=4);
return 0;
}
