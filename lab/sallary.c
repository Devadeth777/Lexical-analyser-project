#include<stdio.h>
int main ()
{
    int data,gb=1024;
    float rem;

    printf("Enter the data as MB used ");
    scanf("%d",&data);
    if(data<0 || data>2048)
    {
        printf("Invalid usage. Enter a value between 0 and 2048 Mb");
        return 0;
    }
    rem=(float)(2*gb)-data;
    printf("REmaining dat : %0.2f",rem);
    printf("\nconsumed percentage=%0.2f %",(float)(data/2*gb)*100);
    printf("\nremaining data = %0.2f GB",(rem/gb));

   return 0;
}