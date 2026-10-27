#include<stdio.h>
int main()
{
    int i=1;
    for(i=0;i<=10;i++)
    {
        if(i==5)
        continue;             // used to skip tht itration or loop;
        printf("%d",i); 
    }
    return 0;
}