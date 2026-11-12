#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    if(num<=0)
    {
        printf("invalid entry");
        return 1;
    }

    while(num%2==0)
        num=num/2;

    while(num%3==0)
        num=num/3;

    while(num%5==0)
        num=num/5;

    if(num==1)
        printf("The number is an ugly number");
    else
        printf("Not an uggly number");

    return 0;
}