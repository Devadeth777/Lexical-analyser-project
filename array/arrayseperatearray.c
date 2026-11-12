#include<stdio.h>
int main()
{
    
    int i , size ,count1=0,count2=0;
    printf(" Enter the size\n");
    scanf("%d",&size);
    int arr[size],arr1[size],arr2[size];
    printf("Enter the arraay elements\n");


    for (i=0 ; i<size; i++)
    {
      scanf("%d",&arr[i]);
    }
    
    for (i=0 ; i<size; i++)
    {

     if(arr[i]%2==0)
     {
        arr2[count2]=arr[i];
        count2++;
     }
     else{
        arr1[count1]=arr[i];
        count1++;
     }
    }
    printf("\nOriginal a array:\n");
    for (i=0 ; i<size; i++)
    { 
        printf("%d ",arr[i]);
      
    }   
    printf("\nodd array:\n");
     for (i=0 ; i<count1; i++)
    { 
        printf("%d ",arr1[i]);
    }    
    printf(" \neven array\n");
     for (i=0 ; i<count2; i++)
    { 
        printf("%d ",arr2[i]);
    }    
    return 0;
}


   
