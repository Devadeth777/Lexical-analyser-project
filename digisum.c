#include<stdio.h>
int main()
{
    int num,sum=0,rem,res;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;

        num=num/10;
       
    }
    printf(" no of digits= %d ",sum);

  return 0;
}