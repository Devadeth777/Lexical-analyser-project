#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        for(j=0;j<2*num-1;j++)
        {
            if(j==num-1-i || j==num-1+i || i==num-1)
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