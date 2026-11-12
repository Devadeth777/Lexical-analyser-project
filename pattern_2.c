#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        int n=count;
        for(j=0;j<count;j++)
        {
            if(i+j<count-1)
            {
                printf("%d",n--);

            }
            else
            {
   
            }
            
            
        
        }
         printf("*");   
        printf("\n");
    }
}