#include<stdio.h>
int main()
{
    
    int i , j,size ,count=0;
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
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            { 
                count=1;
                break;
            }   
            
        }
        if(count)
        {
            continue;
        }
        printf("%d",arr[i]);
    }
}    