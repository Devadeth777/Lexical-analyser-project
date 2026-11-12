#include<stdio.h>
int main()
{
    int num,range,i;
    here:
    printf("Enter the number and limit\n");
    scanf("%d %d",&num,&range);
    if( num <0 || range<0)
    {
        printf("Invalid entry , please enter a value greater than 0\n ");
        goto here;
    }
    for (i=2;i<=range;i++)
    {
        printf(" %d x %d = %d \n",num,i,i*num);
    }
  return 0;
}                     