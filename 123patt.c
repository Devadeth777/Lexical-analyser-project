#include<stdio.h>
int main()
{
    int count,i=0,j=0,ch=1;
    printf("enter the count");
   
    scanf("%d",&count);
    for(i=1;i<=count;i++)
    {
        for(j=1;j<=i;j++)
        {

        
        printf("%d ",ch++);
        }
        printf("\n");
    }
}