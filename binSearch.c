#include<stdio.h>
int main()
{
    int size, i, search, a[10],low, high, mid;
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

    low=0;
    high=size-1;
    while(low<=size)
    {
        mid=(low+high)/2;
        if(search==a[mid])
        {
            printf("\nElement found at %d",mid);
            break;
        }
        else if(search>mid)
            low=mid+1;
        else
            high=mid-1;
        if(low>high)
        {
            printf("\nElement not found"); 
            break;
        }       
    }
}    