#include<stdio.h>
int main ()
{
    int num ,i,j;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
         if(i+j<num-1)
         {
            printf(" ");
         }
         
        }
         for(j=0;j<2*i+1;j++)
         {
            printf("*");
         }
        printf("\n");
    }
    return 0;
}