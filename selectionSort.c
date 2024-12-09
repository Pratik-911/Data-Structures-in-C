#include<stdio.h>
int main()
{
    int size, i, j, temp, a[10], sorted, small;
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
        small=i;
        for(j=i+1;j<size;j++)
        {
            if(a[j]<a[small])
                small=j;
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }  

    printf("\nElements of array after sorting are: ");
    for(i=0;i<size;i++)
        printf(" %d ",a[i]);
}        