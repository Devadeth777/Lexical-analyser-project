#include<stdio.h>
int main()
{
    int sum=0,i;
    float average=0,limit;
    printf("Enter the limit\n");
    scanf("%f",&limit);
    for (i=1;i<=limit;i++)
    {
        sum+=i;
    }
    average=(float)sum/limit;
    printf("sum =%d \naverage =%g",sum ,average);
    return 0;

}