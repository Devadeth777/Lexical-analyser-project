#include<stdio.h>
int main()
{
    int size,size1,i,j,temp=0;
    printf("\nEnter the size");
    scanf("%d",&size);

    int arr[size];

    printf("\nEnter the elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter the size of second array");
    scanf("%d",&size1);

    int arr1[size1+size];

    printf("\nEnter the elements");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<size;i++)
    {
        arr1[size1+i]=arr[i];
    }

    for(i=0;i<(size+size1)-1;i++)
    {
        for(j=0;j<(size+size1)-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }

    for(i=0;i<size+size1;i++)
    {
        printf("%d ",arr1[i]);
    }

    return 0;
}