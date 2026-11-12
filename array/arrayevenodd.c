#include<stdio.h>
int main()
{
    
    int i , size ,count=0;
    printf(" Enter the size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }
    
    for (i=0 ; i<size; i++)
    {
     if(arr[i]%2==0)
     {
        count++;
     }

    }
    printf("Odd count = %d\n",size-count);
    printf("Odd count = %dn",count);
    return 0;
}
