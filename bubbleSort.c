#include<stdio.h>
int main()
{
    int size, i, j, temp, a[10];
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
        for(j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        }
    }
    
    printf("\nElements of array after sorting are: ");
    for(i=0;i<size;i++)
        printf(" %d ",a[i]);
}    