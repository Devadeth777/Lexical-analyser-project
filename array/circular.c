#include<stdio.h>
int main()
{
    
    int i , j,size,k ,temp,shift;
    printf(" Enter the size\n");
    scanf("%d",&size);
    printf(" Enter the shift count\n");
     scanf("%d",&shift);
    int arr[size];
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }
    
 for(j=0;j<(shift%size);j++)   
 {
    temp=arr[0];
    for (i=0 ; i<size-1; i++)
    {
      arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
 }
  for (i=0 ; i<size; i++)
    {
      printf("%d",arr[i]);
    }

}