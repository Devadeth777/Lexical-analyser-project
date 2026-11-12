#include<stdio.h>
int main()
{
    int count,i,j;
    int n=1;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        
        for(j=0;j<i;j++)
        {
            
             printf("%d ",n++);
            
        }
        printf("\n");
    }
}