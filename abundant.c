#include<stdio.h>
int main()
{
    int num ,i,sum=0,temp;
    scanf("%d",&num);
    temp=num;
    for(i=1;i<num;i++)              // for loop until 1 to num-1 
    {
        if(num%i==0)               // for checking devicor so it check num divisible  by num 1 to num-1;
        {
            sum=sum+i;               // divisible numbers are summed up for validation ;
        }
    }
    if(sum>temp)
    {
        printf("%d is abundant number ",temp);
    }
    else
    {
         printf("%d is not an abundant number ",temp);
    }
}