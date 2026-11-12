#include<stdio.h>
int main()
{
    int unit,total,bill;
    printf("Ennter the hour amound ");
    scanf("%d",&unit);
    if(unit<0)
    {
    printf("Invalid input");
    return 0;
    } 
    if(unit<=2)
    {
      bill=(unit*30);
    }
   else if(unit>2 &&unit<=5)
    {
      bill=(60)+((unit-2)*20);
    }
    
    else if(unit>5)
    {
        bill=120+(unit-5)*10;
    }
    total = bill;
    printf("Total =%d",total);
    return 0;

}