#include<stdio.h>
int main()
{
    int num,temp=0, res=0;
    scanf("%d",&num);
    temp=num;
    while(num>0) //123
    {
        res= num%10 +res*10;
        num=num/10;

    }
    if(res==temp)
    {
        printf("the number is palindrome");

    else
    {
     printf("Not a palindrome");
    }

}