#include<stdio.h>
int main()
{
    int num,opp;
    here:
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<1)
    {
        printf("invalid number\n");
        goto here;
    }
    printf("Enter choice for operation");
    printf("1.SQUARE");
    printf("2.CUBE");
    printf("3.RECIPROCAL");
    scanf("%d",&opp);

    switch(opp)
    {
        case 1:
        printf("you choose square\n");
        printf("square of %d = %d",num,num*num );
        break;

        case 2:
        printf("you choose cube\n");
        printf("cube of %d = %d",num, num*num*num );
        break;

        case 3:
        printf("you choose reciprocal\n");
        printf("reciprocal of %d = %f",num,(float)1/num);
        break;
        default:
        printf("enter a valid option");
    }

}