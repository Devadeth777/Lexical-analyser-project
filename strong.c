
#include<stdio.h>
int main()
{
    int temp,i,num,sum=0,rem,fact=1;
    printf("Enter the number ");
    scanf("%d",&num);
    temp=num;

    while(num>0)
    {
        rem= num % 10;
        fact=1;

        for(i=2;i<=rem;i++)
        {
            fact=fact*i;
        }

        num=num/10;
        sum+= fact;
    }

    if(sum == temp)
    {
        printf("strong num");
    }
    else
    {
        printf("Not a strong num");
    }
    return 0;
}
