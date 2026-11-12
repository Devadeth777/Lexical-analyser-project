#include<stdio.h>
int main()
{
    int count,i,j;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        int n=1;
        for(j=0;j<count;j++)
        {
            if(i+j<count-1)
            {
                printf(" ");

            }
            else
            {
                printf("%d",n++);
            }
        }
        printf("\n");
    }
}