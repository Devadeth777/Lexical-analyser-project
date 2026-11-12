#include<stdio.h>
int main()
{
  
    int n;

    printf("Enter the number\n");
    scanf("%d ",&n);
    n % 2 ? (n > 0 ?  printf("positive &odd \n"): printf("negative & odd\n")) : 
            (n > 0 ?  printf("positive &even\n"): (n ==0 ? printf("zero\n") :printf("negative & even\n")));


    return 0;



}