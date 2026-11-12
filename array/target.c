#include<stdio.h>
int main()
{
    
    int i , j,size,target,flag=0;
    printf(" Enter the size\n");
    scanf("%d",&size);
    printf(" Enter the target count\n");
     scanf("%d",&target);
    int arr[size];
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
              printf("\n index num: %d ,%d ",i,j);
              flag=1;
            }
           
        }
    }
    if(flag==0)
    {
        printf("Index not found\n");
    }
    return 0;
}