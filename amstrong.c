#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,res,count=0,i;
    scanf("%d",&num);
    temp=num;
    res=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    while(temp>0)
    {
        rem=temp%10;
        for(i=1;i<count;i++)
        {
        sum+=rem *rem ;
        }
    
        temp=temp/10;
        
    }
  if(sum == res)
  {
      printf(" the entered number is a Amstrong number ");
  }
  else{
      printf(" not a Amstrong number");
  }

  return 0;
}