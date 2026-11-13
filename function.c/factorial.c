#include<stdio.h>
int fact(int);
int fact(int n)
{
 if(n==1)
 {
    return 1;
 }
 else 
 {
    return n*fact(n-1);
 }
}
int main()
{
    int num,res ;
    scanf("%d",&num);
    res=fact( num);
    printf("%d",res);
}