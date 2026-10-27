#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))// leap yr should be divisible by 4 ,400 and not by 100
    {
        printf("%d is a leap year",year);
    }
    else
    {
      printf("Not a leap year");
    }
}