#include<stdio.h>
int main()
{
    int i, j, size, sum=0, count=0;
    printf("Enter the size\n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements\n");

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    int temp1=0, temp2=0;

    for(i=0; i<size-1; i++)
    {
        temp2  += arr[i];
        sum = sum - arr[i];

        temp1 = sum -temp2;

        if(temp1 % 2 != 0)
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}