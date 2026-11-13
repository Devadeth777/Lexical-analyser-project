#include<stdio.h>

int is_prime(int);
int reverse(int, int);

int is_prime(int n)
{
    int i;

    if(n<2)
        return 0;

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int reverse(int n, int rev)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        return reverse(n/10, rev*10+n%10);
    }
}

int main()
{
    int num,res;

    printf("Enter the num: ");
    scanf("%d",&num);

    if(is_prime(num))
    {
        res=reverse(num,0);
    }
    else
    {
        res=num;
    }

    printf("%d",res);

    return 0;
}