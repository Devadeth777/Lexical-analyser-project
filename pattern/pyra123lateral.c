#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the number\n");
    scanf("%d",&num);
    int ch,ch2;
    for(i=0;i<num;i++)
    {   ch=num-i;
        for (j=0;j<=i;j++)
        {
            printf("%d ",ch);
            ch++;
        }
        printf("\n");
    }
     for(i=0;i<num;i++)
    {   ch2=num-(num-2)+i;
        for (j=num-1-i;j>=1;j--)
        {
            printf("%d ",ch2);
            ch2++;
        }
        printf("\n");
    }
}