
#include<stdio.h>
int main ()
{
    int num,c=0,sum=0,l=0,day=0;
    printf("Enter 5 elements\n");

    while (c<5)
    {
        scanf("%d",&num);

        if(num<0)
        {
            printf("Invalid input");
            return 0;
        }

        sum+=num;

        if(c==0 || l<num)
        {
            l=num;
            day=c+1;
        }

        c++;
    }

    printf("\nSum = %d",sum);
    printf("\nAverage = %g",sum/5.0);
    printf("\nLargest = %d",l);
    printf("\nDay = %d",day);

    return 0;
}
