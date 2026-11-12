#include<stdio.h>
int square(int);
int main()
{
    int num,res;
    printf("Enter the number ");
    scanf("%d",&num);
    res=square(num);
    printf("result = %d ",res);
    return 0;
}
int square(int n)
{
    return n*n;
}