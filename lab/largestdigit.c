#include<stdio.h>
int main ()
{
    int size, i,temp ,rem;
    printf("Enter the size\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter thhe array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {  
        int l=0,s=arr[i];
       temp=arr[i];
       while(temp>0)
       {
        rem=temp%10;
        if(l<rem)
        {
            l=rem;
        }
        if( s>rem)
        {
         s=rem;
        }
        temp=temp/10;
       }
       
       printf("\n largest=%d smallest=%d",l,s);
    }
  return 0;
}