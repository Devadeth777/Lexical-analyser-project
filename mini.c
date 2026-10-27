#include<stdio.h>
int main()
{
    int option;
    printf("WELCOME TO EMERTXE CAFE\n");
    printf("1. pizza=250\n2. biriyani=340\n3. pasta =200\n");
    printf("Enter your choise : ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("you ordered pizza\n");
        break;
        case 2:
        printf("you ordered biriyani\n");
        break;
        case 3:
        printf("you ordered pasta\n");
        break;
        default:
        printf("item not found");
        
}
printf("Thank you visit again");
}

