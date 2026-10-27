#include<stdio.h>
int main()
{
    int limit,i=1;
    printf("Enter the number ");
    scanf("%d",&limit);
    label:
    printf("%d ",i);
    i++;
    if(i<=limit)
    {
        goto label;
    }

return 0;


}