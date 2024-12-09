#include<stdio.h>
int main()
{
    int size, i, search, a[10], flag=0;
    printf("Enter size of array: \n");
    scanf("%d",&size);
    printf("\nEnter elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nElements of array are: ");
    for(i=0;i<size;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if (search==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\nElement %d found at %d",search,i);
    else
    printf("\nElement %d not found",search);
return 0;
}