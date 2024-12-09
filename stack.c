#include<stdio.h>
int size, value, top=-1, a[10];
void push()
{
    if(top==size-1)
        printf("overflow\n");
    else
    {
        top++;
        printf("Enter element to be inserted: ");
        scanf("%d",&value);
        a[top]=value;
        printf("\nElement inserted");
    }
}

void pop()
{
    if(top==-1)
        printf("Underflow\n");
    else
    {
        printf("\nElement deleted is: %d",a[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("\nStack is empty");
    else
    {
        printf("\nElements of stack are: ");
        for(i=top;i>=0;i--)
            printf(" %d ",a[i]);
    }    
}

int main()
{
    int ch;
    printf("Enter size of stack: ");
    scanf("%d",&size);

    do{
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: printf("\nexit");
            break;
            default: printf("Enter valid choice");
        }
    } while (ch!=4);
}