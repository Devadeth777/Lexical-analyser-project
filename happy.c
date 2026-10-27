#include<stdio.h>
int main()
{
    int num ,sum=0,count=0,digit ;
    scanf("%d",&num);

    while(num!=0 && count<100)  // continue loop until number become 0 , count for loop until 1 is obtained
{
   sum=0;                 // for checking the new sum if fist sum !=1
    
    while(num>0)
    {
        digit=num%10 ;         //from 19 -->19%10 = 9
        sum=sum+digit*digit;   // 0=0+ 9^2
        num=num/10;            // 19/10=1;

    }
    num=sum;                 // for validation check
    count++;                // for multiple checking of sum ==1
}
    if(sum==1)
    {
        printf(" Happy number");
    }
    else
    {
        printf("not a happy number")
    }
    return 0;
}