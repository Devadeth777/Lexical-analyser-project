#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size\n");
    scanf("%d",&size);

    int arr[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;)
    {
        int flag=0;

    

        for(j=2;j*j<=arr[i];j++)
        {
            if(arr[i]%2==0)
          
            flag=1;
            break;

        }
        if(flag==1)
        
            { 
            arr[i]=arr[i+1];
            continue;

            }
        i++;    
     }
}

   
