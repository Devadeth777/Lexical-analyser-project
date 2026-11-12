#include<stdio.h>
int main()
{
    int size,size2,i,j,temp=0,count1=0,count2=0,count=0;

    printf("Enter the size\n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
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

    printf("Enter the size of second array\n");
    scanf("%d",&size2);

    int arr1[size2];

    printf("Enter the elements\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<size2-1;i++)
    {
        for(j=0;j<size2-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
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
        printf("%d ",arr1[i]);
    }

    printf("\n");

    if(size==size2)
    {
        for(i=0;i<size;i++)
        {
            if(arr[i]==arr1[i])
                count++;
        }

        if(count==size)
            printf("The two arrays are anagram\n");
        else
            printf("Not an anagram\n");
    }
    else
    {
        printf("Not an anagram\n");
    }

    return 0;
}