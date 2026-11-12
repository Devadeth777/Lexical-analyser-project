#include<stdio.h>
int main()
{
    int i, size, product=1, zero_count=0;

    printf("Enter the size\n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements\n");

    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);

        if(arr[i] == 0)
        {
            zero_count++;
        }
        else
        {
            product *= arr[i];
        }
    }

    for(i=0; i<size; i++)
    {
        if(zero_count > 1)
        {
            arr[i] = 0;
        }
        else if(zero_count == 1)
        {
            if(arr[i] == 0)
            {
                arr[i] = product;
            }
            else
            {
                arr[i] = 0;
            }
        }      
        else
        {
         arr[i] = product / arr[i];
        }
    }
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}