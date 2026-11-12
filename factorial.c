#include<stdio.h>
int main()
{
    int num,fact=1,i;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        fact=fact*(num-i);
    }
    printf("%d",fact);


  return 0;
}