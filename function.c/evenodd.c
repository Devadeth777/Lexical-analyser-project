#include<stdio.h>
int evenodd(int n1);
int main()
{
    int n1,res;
    printf("Enter the numbers ");
    scanf("%d",&n1);
    
    if(evenodd(n1));
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}
int evenodd(int n1)
{
  
    return n1%2;
}