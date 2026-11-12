#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if(i ==1 || j ==1 || i == count || j == count) 
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
          
        }
        printf("\n");
    }
    return 0;
}