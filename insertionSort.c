#include<stdio.h>
int main()
{
    int size, i, j, temp, a[10], sorted;
    printf("Enter size of array: \n");
    scanf("%d",&size);
    printf("\nEnter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    printf("\nElements of array before sorting are: ");
    for(i=0;i<size;i++)
        printf(" %d ",a[i]);

    for(i=0;i<size;i++)
    {
        sorted=a[i];
        for(j=i-1; j>=0 && a[j]>sorted; j--)
            a[j+1]=a[j];
        a[j+1]=sorted;
    }
    
    printf("\nElements of array after sorting are: ");
    for(i=0;i<size;i++)
        printf(" %d ",a[i]);

}        