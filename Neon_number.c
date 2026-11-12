#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    scanf("%d",&num);
    temp=num*num;
    
    while(temp>0)
    {
        rem=temp%10;
        sum+=rem;
    
        temp=temp/10;
       
    }
  if(num==sum)
  {
      printf(" the entered number is a Neon number ");
  }
  else{
      printf(" not a Neon  number");
  }

  return 0;
}