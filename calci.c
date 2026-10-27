#include<stdio.h>
int main()
{
int n1,n2,opp;
printf("Enter the expression:");
scanf("%d%c%d",&n1,&opp,&n2);
if(opp=='/'&& n2==0)
{
    printf("We cannot devide a number by zero\n");
    return 1;
}
switch(opp)
{
    case '+':
    printf("addition is %d\n", n1 + n2);
    break;

    case '-':
    printf("Subtraction is %d\n", n1 - n2);
    break;

    case '*':
    printf("Multiplication is %d\n", n1 * n2);
    break;

    case '/':
    printf("Division is %g\n", (float)n1 / n2);
    break;
    default:
    printf("Enter correct operator \n");
    break;
}
}