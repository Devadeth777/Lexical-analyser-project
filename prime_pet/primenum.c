#include<stdio.h>
int main()

{
    int i,num,flag=0;
    printf("Enter a number");
    scanf("%d",&num);
    if(num<1)
    {
        printf("Invalid input !!");
        return 1;
    }
    
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        printf(" %d is a prime number",num);
    }
    else{
        printf("not a prime number");
    }
    return 0;
}