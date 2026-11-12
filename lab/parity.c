#include<stdio.h>
int main()
{
    int size ,count=0;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array :");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i]%2)
        {
            arr[i]=1;
            count++;
            
        }
        else
        {
            arr[i]=0;
        }
    }
    for(int i=0 ; i<size ; i++)
    {
    printf("%d ",arr[i]);
    }
    printf("\n");
    if(count%2)
    {
        printf("Odd parity");
    }
    else
    {
        printf("Even parity");
    }
    int decimal = 0;
    int power = 1;
    for(int i = size-1; i >= 0; i--)
    {
    decimal = decimal + arr[i] * power;
    power = power * 2;
    }

     printf("\nDecimal value = %d", decimal);

}