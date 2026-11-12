#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    scanf("%d",&num);

    while(num>9)
    {
        sum=0;
        temp=num;

        while(temp>0)
        {
            rem=temp%10;
            sum+=rem;
            temp=temp/10;
        }

        num=sum;
    }

    if(num==1)
    {
        printf("The entered number is a Magic number");
    }
    else
    {
        printf("Not a Magic number");
    }

    return 0;
}