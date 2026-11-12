#include<stdio.h>
int main()

{
    int i,j,upper,lower,flag=0;
    printf("Enter the lower limit\n");
    scanf("%d",&lower);
    printf("Enter the upper limit\n");
    scanf("%d",&upper);
    if(lower<1|| upper<lower)
    {
        printf("Invalid input \n");
        return 1;
    }
    
        for (j=lower;j<=upper;j++)
        {   flag=0;
            if(j<2)
            {
                continue;
            }
            for(i=2;i*i<=j;i++)
            {
                if(j%i==0)

                {
                flag=1;
                break;
                }
            }
            if (flag==0)
            {   
            
                printf("%d ",j);
            }

        }
    
    return 0;
}