
#include<stdio.h>
int main()
{
    int count, i=0, j=0;
    printf("enter the count");
    scanf("%d", &count);

    for(i=1; i<=count; i++)
    {
        int ch = 65 + count-i;

        for(j=1; j<=i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
}
