#include<stdio.h>
int main()
{
    int size,i,j,temp=0,count1=0,count2=0;
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
        for (j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
               count1++;
            }
        }
    }
    printf("Enter the size of second array\n");
    scanf("%d",&size);
    int arr1[size];
      printf("Enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<size-1;i++)
    {
        for (j=0;j<size-1-i;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
               temp=arr1[j];
               arr1[j]=arr1[j+1];
               arr1[j+1]=temp;
               count2++;
            }
        }
    }
   

  for(i=0;i<size;i++)
    {
        printf("%d",arr1[i]);
    }
    printf("\nArray 1 swap count is %d",count1);
    printf("\nArray 2 swap count is %d",count2);

    if(count1>count2)
    {
        printf("\nArray 2 is faster ");
    }
    else if(count1<count2)
    {
        printf("\nArray 1is faster ");
    }
    else
    {
        printf("\nboth array take same time");
    }
    return 0;
}

