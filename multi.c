#include<stdio.h>
int main()
{
int i,num1,num2,pro=0;
scanf("%d %d",&num1,&num2);
for(i=1;i<=num2;i++)
{
  pro+=num1;
}
printf("%d",pro);
return 0;
}
