#include<stdio.h>
void natural(int);
void natural(int n)
{
    if(n<1)
    {
        return;
    }
    natural(n-1);
    printf("%d ",n);
}
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    natural(num);
}