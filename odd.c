#include<stdio.h>
int main ()
{
    int limit, i;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    if (limit %2==0)
    {
       limit= limit-1;
       for(i=limit; i>0 ; i= i-2)
       {
        
        printf("%d ",i);
  
       }
    }
   
}