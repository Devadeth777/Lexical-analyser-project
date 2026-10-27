#include<stdio.h>
int main()
{
    int i,j=1,limit;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {  
         j=j*2;
        printf("%d ",j);
    }
    return 0;
}