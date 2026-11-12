#include<stdio.h>
int main()
{
    
    int i , size;
    printf(" Enter the size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }
    
    printf("output is :");
    for (i=0 ; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
   
}
