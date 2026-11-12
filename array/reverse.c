#include<stdio.h>
int main()
{
    
    int i , size;
    printf(" Enter the size\n");
    scanf("%d",&size);
    int arr[size],temp;
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }

  
    for (i=0 ; i<size/2; i++)
    {
      temp=arr[i];
      arr[i]=arr[size-1-i];
      arr[size-1-i]=temp;
    }
     for (i=0 ; i<size; i++)
    {
      printf("%d",arr[i]);
    }
    return 0;

}
