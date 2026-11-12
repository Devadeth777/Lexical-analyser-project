
#include<stdio.h>
int main()
{
    int i,size,sum=0;
    printf("Enter the size\n");
    scanf("%d",&size);

    if(size<=0)
    {
        printf("Invalid size");
        return 1;
    }

    int arr[size];

    printf("Enter the array elements\n");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest=arr[0],smallest=arr[0];

    for(i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }

        if(smallest>arr[i])
        {
            smallest=arr[i];
        }
    }

    printf("Largest = %d\n",largest);
    printf("Smallest = %d\n",smallest);
}
