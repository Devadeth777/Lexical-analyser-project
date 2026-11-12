#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size\n");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        int flag=0;

        if(arr[i]<2)
        {
            printf("%d is not a prime\n",arr[i]);
            continue;
        }

        for(j=2;j*j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%d is a prime number\n",arr[i]);
        }
        else
        {
            printf("%d is not a prime\n",arr[i]);
        }
    }

    return 0;
}