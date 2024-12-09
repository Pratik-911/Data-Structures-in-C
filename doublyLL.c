#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
	struct node *prev;
};
struct node *nextNode;
struct node *newNode;
struct node *head=NULL;
struct node *temp;
struct node*prevNode;
int i,loc;
void begInsert()
{
	newNode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to be inserted");
	scanf("%d",&newNode->data);
	if(head==NULL)
	{
		head=newNode;
		newNode->next=NULL;
		newNode->prev=NULL;
	}
	else
	{
      newNode->next=head;
      newNode->prev=NULL;
      head->prev=newNode;
      head=newNode;    
	}
}

void endInsert()
{
	newNode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to be inserted");
	scanf("%d",&newNode->data);
	if(head==NULL)
	{
		head=newNode;
		newNode->next=newNode->prev=NULL;
	}
	else
	{
		head=temp;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode->next;
		temp->next=newNode;
		newNode->prev=temp;
	}
	printf("\n Value inserted at end");
}
void locInsert()
{
	struct node*nextNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to be inserted ");
	scanf("%d",newNode->data);
	printf("\n Enter loc");
	scanf("%d",&loc);
	if (head==NULL)
	{
		head->prev=head->next=NULL;
	}
	else
	{  
     temp=head;
     for(i=1;i<loc-1;i++)
     	temp=temp->next;
     nextNode=temp->next;
     newNode->next=nextNode;
     newNode->prev=temp;
     temp->next=newNode;
     nextNode->prev=newNode;
	}
} 
void begDelete()
{
 if(head==NULL)
 	printf("\n underflow");
 else
 {
 	temp=head;
 	head=head->next;
 	head->prev=NULL;
    printf("\n Node deleted:%d",temp->data);
    free(temp);
 }
}  
void endDelete()
{
	if(head==NULL)
		printf("\n Underflow");
	else
	{
		head=temp;
		while(temp->next!=NULL)
			temp=temp->next;
		prevNode=temp->prev;
		prevNode->next=NULL;
		printf("\n Node deleted:%d",temp->data);
		free(temp);
	}
}
void locDelete()
{
	if(head==NULL)
		printf("\n underflow");
	else
	{
		temp=head;
		for(i=1;i<loc;i++)
			temp=temp->next;
		prevNode=temp->prev;
		nextNode=temp->next;
		printf("\n value deleted:%d",temp->data);
		free(temp);
		prevNode->next=newNode;
		nextNode->prev=prevNode;
	}

}
void display()
{
	if(head==NULL)
		printf("\n empty");
	else
	{   
		temp=head;
		printf("\n elements are:");
		while(temp!=NULL)
		     {
              	printf(" %d ",temp->data);
              	temp=temp->next;
		     }
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n 1:begininsert \n 2:endinsert \n 3:locinsert \n 4:beginDelete \n 5:endDelete \n 6:locDelete \n 7: Display \n 8:Exit");
		printf("\n Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:begInsert();
		break;
	    case 2:endInsert();
	    break;
	    case 3:locInsert();
	    break;
	    case 4:begDelete();
	    break;
	    case 5:endDelete();
	    break;
	    case 6:locDelete();
	    break;
	    case 7:display();
	    break;	
	    case 8: printf("\n Exit");
	    break;	
      }
    }while(ch!=8);
}