#include<stdio.h>
int main()
{
    int count,i,j,k;
    printf("enter a number ");
    scanf("%d",&count);
    for(i=1;i<2*count;i++)
    {
       if(i<=count)
          {
            for(j=1;j<=i;j++)
            {
            
            printf("*");

            }
          }
        else
            {
               for(k=i;k<=2*count-1;k++)
               {
                  printf("*");
               }
            }
        printf("\n");
    }
}