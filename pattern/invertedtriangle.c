#include<stdio.h>
int main ()
{
    int num ,i,j;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
         printf(" ");
        }
        for(j=2*num-1;j>2*i;j--)
        {
         printf("*");
        }
         
         
        printf("\n");
    }
    return 0;
}