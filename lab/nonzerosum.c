#include<stdio.h>
int main()
{
    int num ,result=1;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num>0)
    {  if(num%10!=0)
        {
        result*=num%10;
        }
        num=num/10;
    }
    printf("%d",result);
    return 0;
}