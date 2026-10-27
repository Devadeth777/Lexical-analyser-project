#include<stdio.h>
int main()
{
    int ch,count,line,i=0,j=0;
    printf("enter the charecter\n");
    printf(" The count and  line\n");
    scanf("%c %d %d",&ch,&count,&line);
    for(i=1;i<=line;i++)
    {
        for(j=1;j<=count;j++)
        {

        
        printf("%c",ch);
        }
        printf("\n");
    }
}