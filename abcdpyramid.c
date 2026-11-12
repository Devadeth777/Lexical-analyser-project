#include<stdio.h>
int main()
{
    int i,j,count;

    scanf("%d",&count);

    for(i=1;i<=count;i++)
    {
        char ch='A';

        for(j=1;j<=count-i;j++)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            printf("%c",ch++);
        }

        ch=ch-2;

        for(j=1;j<i;j++)
        {
            printf("%c",ch--);
        }

        printf("\n");
    }

    return 0;
}