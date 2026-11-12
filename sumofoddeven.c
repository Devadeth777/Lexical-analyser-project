#include<stdio.h>
int main()
{
    int num,sum1=0,sum2=0,rem;
    scanf("%d",&num);
    
    
    while(num>0)
    {
        rem=num%10;
        if(rem %2 ==0)
        {
            sum1 += rem;
        }
        else
        {
            sum2 += rem;
        }
    
        num=num/10;
       
    }
  
      printf(" Even sum is %d \n ",sum1);
  
      printf("Odd sum is %d \n",sum2);
 

  return 0;
}