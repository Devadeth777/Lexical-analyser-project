#include<stdio.h>
int main()
{
    
    int i , j,size,k ,flag=0;
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
                flag=1;
                break;
            }   
            
        }
        if(flag)
        {
            continue;
        }
        int count=1;
        for(k=i+1;k<size;k++)
        {
            if(arr[i]==arr[k])
            {
                count++;
            }
        }
        printf("%d's count is%d\n",arr[i],count);
    }
}    