#include<stdio.h>
int main()

{
    int i,j,num,flag=0,count=0;
    printf("Enter the limit\n");
    scanf("%d",&num);
    if(num<1)
    {
        printf("Invalid input \n");
        return 1;
    }
    
        for (j=2;j<=500;j++)
        {   flag=0;
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
                count++;
                printf("%d ",j);
                
                if(count==num)
                    break;
            }

        }
    
    return 0;
}