#include<stdio.h>
int main()
{
    int num,sum=0,rem,pro=0,temp;
    scanf("%d",&num);
    //temp=num;
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        pro*=rem;
        num=num/10;
       
    }
  if(pro==sum)
  {
      printf(" the entered number is a spy number ");
  }
  else{
      printf(" not a spy number");
  }

  return 0;
}