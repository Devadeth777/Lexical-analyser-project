#include<stdio.h>
int count(int);
int count(int n)
{
 if (n==0)
 {
    return 0;
 }
 else{
    return 1+count(n/10);
 }nk                      
}
int main()
{
    int n,res ;
    printf("enter  num\n");
    scanf("%d",&n);
    res=count( n);
    printf("%d ",res);
}