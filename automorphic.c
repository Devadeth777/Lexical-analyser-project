
#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,res,count=0,i,div=1;
    scanf("%d",&num);

    temp=num*num;
    res=num;

    while(num>0)
    {
        num=num/10;
        count++;
    }

    for(i=1;i<=count;i++)
    {
        div=div*10;
    }

    rem=temp%div;

    if(res == rem)
    {
        printf("The entered number is an Automorphic number");
    }
    else
    {
        printf("Not an Automorphic number");
    }

    return 0;
}
