#include<stdio.h>
int main()
{
    int choco=8,a,b;
    while(choco>0)
    {   label1:
        printf("chocolate remaining = %d\n",choco);
        printf("player 1 turn\n");
        printf("pick chocolates (1 to 3)\n");
        scanf("%d",&a);
        if(a<1  ||  a>3 || a>choco)
        {
            printf("invalid input  RETRY!!! \n");
            goto label1;
        }
        choco=choco-a;
        if(choco==0)
        {
            printf("Player 2 got chilly!\n");
            printf("player 1 Won \n");
            printf("player 2 Lost \n");
            break;
        }
        label2:
        printf("chocolate remaining = %d\n",choco);
        printf("player 2 turn\n");
        printf("pick chocolates (1 to 3)\n");
        //p1=choco;
        scanf("%d",&b);
        if(b<1  ||  b>3 || b>choco)
        {
            printf("invalid input. RETRY!!! \n ");
            goto label2;
        }
        choco=choco-b;
        if(choco==0)
        {
            printf("Player 1 got chilly!\n");
            printf("player 2 Won \n");
            printf("player 1 Lost \n");
            break;
        }
        printf("chocolate remaining = %d\n",choco);
       
    }
     
     return 0;
}