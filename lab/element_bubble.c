#include<stdio.h>
int main()
{
    int size,size2,i,j,temp=0,count=0;
    printf("\nEnter the size");
    scanf("%d",&size);

    int arr[size];

    printf("\nEnter the elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the size of second element");
    scanf("%d",&size2);

    int arr2[size2];

    printf("\nEnter the elements\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<size2-1;i++)
    {
        for(j=0;j<size2-1-i;j++)
        {
            if(arr2[j]>arr2[j+1])
            {
                temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    for(i=0;i<size2;i++)
    {
        printf("%d ",arr2[i]);
    }

    i=0;
    j=0;

    while(i<size && j<size2)
    {
        if(arr[i]==arr2[j])
        {
            count++;
            i++;
            j++;
        }
        else if(arr[i]>arr2[j])
        {
            j++;
        }
        else
        {
            break;
        }
    }

    if(count==size)
    {
        printf("\nAll elements are present in array");
    }
    else
    {
        printf("\nNot all elements are present");
    }

    return 0;
}