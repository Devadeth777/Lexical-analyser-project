#include<stdio.h>
int main()
{
    int num, rem, count = 0, first;
    scanf("%d", &num);
    first = num;                  // taken to check for first number 0;
    while(first >= 10)            //check until number greater than 9 (we need 2 digit for checking) 
    { 
        first = first / 10;      // 120/10->12 12/10 -->first number
    }
    if(first == 0)
    {
        printf("Not a Duck number");
        return 0;
    }
    while(num > 0)
    {
        rem = num % 10;          // check for zro count in number
        if(rem == 0)
        {
            count++;             // zero count
        }
        num = num / 10;
    }
    if(count > 0)
        printf("Duck number");
    else
        printf("Not a Duck number");
      return 0;
}

