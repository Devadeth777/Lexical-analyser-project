#include<stdio.h>
int main()
{
  
    int n1;

    printf("Enter the number\n");
    scanf("%d ",&n1);
    n1 >= 0 ? (n1 ==0 ? printf("zero\n"): printf("positive\n")) : printf("negative\n");
    return 0;



}