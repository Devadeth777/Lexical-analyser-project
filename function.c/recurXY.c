#include<stdio.h>
int fun(int,int);
int fun(int x,int y)
{
 if(y==1)
 {
    return x;
 }
 else 
 {
    return fun(x,y-1)*x;
 }
}
int main()
{
    int x,y,res ;
    printf("enter 2 elements");
    scanf("%d%d",&x,&y);
    res=fun( x ,y);
    printf("%d",res);
}