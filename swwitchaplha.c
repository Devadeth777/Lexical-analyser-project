#include<stdio.h>
int main()
{
char ch;
printf("Enter the charecter:\n");
scanf("%c",ch);


switch(ch)
{
    case 'A'...'Z':
    printf("Upper case alphabet\n");
    break;

    case 'a'...'z':
    printf("Upper case alphabet\n");
    break;

    case '0'...'9':
    printf("Upper case alphabet\n");
    break; 

    default:
    printf("Its a symbol\n");
    break;

}
}