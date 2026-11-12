for knowing digit count of entered number 


while (num>0)
{
    num=num/10;
    count++ or count =count+1;
}

sum of digits of a number 
{
   reminder = num%10    ......> taking last number ;
   sum = sum + reminder --------> initially sum =0 , so 0+rem value assigned to sum , so that every time the obtained last number get added to previous sum 
                                  and assigned to sum ,hencewe get new sum ;

}


sum of square or cube of digits
(
  reminder = num%10    ......> taking last number ;
  sum = sum + reminder * reminder;  rem*rem is th square of reminder (digit);

)

sum of ^power of count of digits 
{
while (num>0)
{
    num=num/10;
    count++ or count =count+1;      // this givescount of entered digit count of a number 
}
for (i=1;i<count ;i++)
{
    sum = sum * reminder ;    // sum =1 , if i=1  digit=5 ,  //      1*5 =1
                                          if i=2  1*5 =5 , sum =5 for second itration i=2, sum= 5*5 (square )
                                          if i=3  (cube )
}



 

}