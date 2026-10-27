#include<stdio.h>
int main()
{
    int count,i=0,j=0;
    printf("enter the count");
   
    scanf("%d",&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=count;j++)
        {

        
        printf("%d",j);
        }
        printf("\n");
    }
}