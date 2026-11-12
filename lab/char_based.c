#include<stdio.h>
int main()
{
    char ch;
    printf("Enter charecter:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A'...'Z':
        printf("upper case charecter");
        break;

        case 'a'...'z':
        printf("lower case charecter");
        break;
        case '1'...'9':
        if(ch%2==0)
        {
            printf("Even number");
        }
        else
        {
            printf("Odd number");
        }

    }
    return 0;
}