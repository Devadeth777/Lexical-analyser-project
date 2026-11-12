#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count-i+1;j++)
        {
            
            
               printf("%d",i);

           
        }
        printf("\n");
    }
}