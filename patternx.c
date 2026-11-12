#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=0;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {
            if((i==j)||((i+j)==count+1))
            {
               printf("%d",j);

            }
            else
            {
             printf(" ");
            }
           
           
        }
        printf("\n");
    }
}