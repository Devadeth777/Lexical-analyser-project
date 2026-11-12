#include<stdio.h>
int main()
{
    int unit,total,bill;
    printf("Ennter the unit amound ");
    scanf("%d",&unit);
    if(unit<0)
    {
    printf("Invalid input");
    return 0;
    } 
    if(unit<=100)
    {
      bill=(unit*2);
    }
   else if(unit>=101 &&unit<=200)
    {
      bill=(200)+((unit-100)*3);
    }
    else if(unit>=201 && unit<=500)
    {
      bill=500+(unit-200)*5;
    }
    else if(unit>500)
    {
        bill=2000+(unit-500)*7;
    }
    total = bill+50;
    printf("Total =%d",total);
    return 0;

}