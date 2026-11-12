#include<stdio.h>
int largest(int n1,int n2);
int main()
{
    int n1,n2,res;
    printf("Enter the numbers ");
    scanf("%d%d",&n1,&n2);
    res=largest(n1,n2);
    printf("largest = %d ",res);
    return 0;
}
int largest(int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else 
    return n2;
}