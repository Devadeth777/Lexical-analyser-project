#include<stdio.h>
int prime(int n1);
int main()
{
    int n1;
    printf("Enter the numbers ");
    scanf("%d",&n1);
    
    if(prime(n1))
    {
        printf("prime number");
    }
    else
    {
        printf("not a prime");
    }
}
int prime(int n1)
{
  
    int i;
    for(i=2;i*i<=n1;i++)
    {
        if (n1%i==0)
        {
           return 0;
        }
    
    }
   
    return 1;
    
    
}