#include<stdio.h>
int main()
{
    
    int i , size , average,sum=0;
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
      sum+=arr[i];
    }
    average=(float)sum/size;
    printf("Average = %g",average);
    return 0;



   
   
}
