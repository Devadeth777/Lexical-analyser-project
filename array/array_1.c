#include<stdio.h>
int main()
{
    int arr[5]={1,2};
    int i;

    printf(" arr --> %p\n", arr);
    for (i=0 ; i<5;i++)
    {
        printf("  &arr %p \n",&arr[i]);
    }
    
    
    for (i=0 ; i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}
