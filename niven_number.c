#include<stdio.h>
int main()
{
    int num,sum=0,rem,pro=0,temp;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
    
        num=num/10;
       
    }
  if(temp % sum==0)
  {
      printf(" the entered number is a Niven number ");
  }
  else{
      printf(" not a Niven number");
  }

  return 0;
}