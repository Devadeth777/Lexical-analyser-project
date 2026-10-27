#include<stdio.h>
int main()
{     //initialisation
    int food, qty, size,payment;
    // each food portion size
    int ps=0,pm=0,pl=0;  //pizza
    int bs=0,bm=0,bl=0; //biriyani
    int ds=0,dm=0,dl=0; // dosa
    int fs=0,fm=0,fl=0; // fried rice
   // int water =0,juice=0,coffee=0,tea=0; 
    double total ,subtotal  ,GST;
    int tnum=0,jnum=0,cnum=0,bnum=0,dqty=0,drink=0;  
    // initial welcome //
    printf("_____________________________________\n");
    printf("      WELCOME TO EMERTXE CAFE        \n");
    printf("_____________________________________\n");
 
   // FOOD odering loop //

do {
    printf("--------------FOOD MENU---------------\n");
    printf("1.Pizza       RS 100/150/200\n");
    printf("2.Biriyani    RS 150/250/350\n");
    printf("3.Dosa        RS 50/100/150\n");
    printf("4.Fried rice  RS 100/150/200\n");
    printf("0. FINISH THE ORDER\n");
    scanf("%d",&food); // take food count until zero pressed

      // portion size declaration
    switch(food)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        printf("Select portion size\n ");
        printf("1.small\n");
        printf("2.Medium\n");
        printf("3.Large\n");
        printf("Enter the  portion size\n");
        scanf("%d",&size);
        
       //quantity loop 
       if(size>= 1 && size <= 3)
       {
        printf("Enter the quantity\n");
        scanf("%d",&qty);

        if(qty>0)
        {
            switch(food)
            {
                case 1:
                    switch (size) 
                    {
                        case 1:ps += qty;
                        break;
                        case 2:pm += qty;
                        break;
                        case 3:pl += qty;
                        break;
                    }
                    break;
                
                case 2:
                    switch (size) 
                    {
                        case 1:bs += qty;
                        break;
                        case 2:bm += qty;
                        break;
                        case 3:bl += qty;
                        break;
                    }
                    break;
                case 3:
                    switch (size) 
                    {
                        case 1:ds += qty;
                        break;
                        case 2:dm += qty;
                        break;
                        case 3:dl += qty;
                        break;
                    }
                    break;  
                 case 4:
                    switch (size) 
                    {
                        case 1:fs += qty;
                        break;
                        case 2:fm += qty;
                        break;
                        case 3:fl += qty;
                        break;
                    }
                    break;        
            }
            printf("Oder placed for main course\n");

        }
        else
        {
            printf("Invalid option\n");
        }

       }
       else
       {
        printf("Invalid option\n");
       }
       break;

       case 0:
       printf("Order completed\n");
       break;
        
       default:
       printf("invalid food option\n ");





    }
}while(food!=0);
printf("You finished ordering \n");
// add on drinks
do{

printf("Select your beverages \n");
printf("1.Tea          RS 40\n");
printf("2.Juice        RS 60\n");
printf("3.Coffee       RS 40\n");
printf("4.Black coffee RS 25\n");
printf("0 TO FINISH ORDER\n");
scanf("%d",&drink);


if(drink >=1 && drink<=4)
{
printf("Enter quantity\n");       //PROBLEM
scanf("%d",& dqty);

switch(drink)
{
    case 1: 
    tnum +=dqty;
    break;
    case 2:
    jnum +=dqty;
    break;
    case 3:
    cnum +=dqty;
    break;
    case 4:
    bnum +=dqty;
    break;
}
}
else
{
 printf("Invalid entry\n");
}

}while(drink!=0);
printf("Finished add on drinks\n");
// billing section
subtotal= (double) ps*100 + pm*150 + pl*200 +   bs*150 + bm*250 +bl* 350 + ds*50 +dm*100 +dl*150 + fs*100 +fm*150 +fl*200 +tnum*40 + jnum*60 + cnum*40 + bnum*25;


 GST= subtotal *(18.00/100.00);   
 total=subtotal+GST;
 printf("------------------------------------------------\n");
 printf("--------------------CAFE BILL-------------------\n");
 printf("------------------------------------------------\n");
 
 printf(" Ordered Items     Quantity     count   prize \n");
if(ps>0)
{
    printf("Pizza             small         %d      RS %d  \n",ps,ps*100);
}
if(pm>0)
{
    printf("Pizza            Medium         %d      RS %d \n ",pm,pm*150);
}
if(pl>0)
{
    printf("Pizza            Large          %d      RS %d  \n",pl,pl*200);
}
if(bs>0)
{
    printf("Biriyani          small         %d      RS %d \n ",bs,bs*150);
}
if(bm>0)
{
    printf("Biriyani         Medium         %d      RS %d \n ",bm,bm*250);
}
if(bl>0)
{
    printf("Biriyani         Large          %d      RS %d  \n",bl,bl*350);
}
if(ds>0)
{
    printf("Dosa             small          %d      RS %d  \n",ds,ds*50);
}
if(dm>0)
{
    printf("Dosa            Medium          %d      RS %d  \n",dm,dm*100);
}
if(dl>0)
{
    printf("Dosa            Large           %d      RS %d  \n",dl,dl*150);
}
if(fs>0)
{
    printf("Friedrice       small           %d      RS %d \n ",fs,fs*100);
}
if(fm>0)
{
    printf("Friedrice       Medium          %d      RS %d  \n",fm,fm*150);
}
if(fl>0)
{
    printf("Friedrice       Large           %d      RS %d \n ",fl,fl*200);
}
// DRINGS
if(tnum>0)
{
    printf("Tea                             %d      RS %d  \n",tnum,tnum*40);
}
if(jnum>0)
{
    printf("juice                           %d      RS %d   \n",jnum,jnum*60);
}
if(cnum>0)
{
    printf("coffee                          %d      RS %d  \n ",cnum,cnum*40);
}
if(bnum>0)
{
    printf("black coffee                    %d      RS %d  \n ",bnum,bnum*25);
}
printf("------------------------------------------------- \n");
printf("                                  subtotal Rs %g \n",subtotal);
printf("                                       GST Rs %g \n",GST);
printf("                                     Total Rs %g \n",total);
printf("                  Payment Method                    ");
printf("1.G-Pay");
printf("2.Credit card");
printf("3.Debit card");
printf("4.cash");
scanf("%d",&payment);
switch(payment);
{
    case 1: 
    printf("Your preffered option is G-pay ");
    break;
    case 2:
    printf("Your preffered option is Credit card");
    break;
    case 3:
    printf("Your preffered option is Debit card");
    break;
    case 4:
   printf("Your preffered option is cash ");
    break;

}


    


}
