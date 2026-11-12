#include<stdio.h>
int addition(int n1,int n2);
int main()
{
 int n1,n2;
 printf(" enter two numbers\n");
 scanf("%d%d",&n1,&n2);
 int res=addition(n1,n2);
 printf("Sum is %d",res);
 return 0;
}
int addition(int n1,int n2)
{
    int sum;
    sum=n1+n2;
    return sum;
}