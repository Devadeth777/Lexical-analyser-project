#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        int n=count;
        for(j=count;j>i;j--)
        {
            if(i+1==j)
            {     printf("*"); 
                

            }
            else
            {
             printf("%d",j);
            }
            
        
        }
          
        printf("\n");
    }
}