#include<stdio.h>
int main()
{
    int count ,i,j,k;
    printf("Enter the number\n");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            if(i+j<count-1)
            {
                printf(" ");
            }

        }
        for(k=1;k<=2*i+1;k++)
        {
            printf("%d", k%2);
        }
        printf("\n");
    }
    return 0;
}