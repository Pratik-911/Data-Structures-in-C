#include<stdio.h>
int rear=-1;
int front=-1;
int value, size, a[10];
void enqueue()
{
    if(rear==size-1)
        printf("Overflow\n");
    else
    {
        rear++;
        printf("\nEnter element to be inserted: ");
        scanf("%d",&value);
        if(front==-1)
            front=0;
        a[rear]=value;
        printf("\nElement inserted");
    }    
}

void dequeue()
{
    if(front==-1)
        printf("\nUnderflow");
    else
    {
        printf("Element deleted: %d",a[front]);
        front++;
        if(front>rear)
            front=rear=-1;
    }
}

void display()
{
    int i;
    if(front==-1)
        printf("\nqueue is empty");
    else
    {
        printf("\nqueue is: ");
        for(i=front;i<=rear;i++)
            printf("%d",a[i]);
    }        

}

int main()
{
    int ch;
    printf("Enter size of queue: ");
    scanf("%d",&size);

    do{
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: printf("\nexit");
            break;
            default: printf("Enter valid choice");
            break;
        }
    } while (ch!=4);
}