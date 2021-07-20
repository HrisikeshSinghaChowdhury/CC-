/********************TO FIND THE SUM OF GIVEN SERIES*********************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   /*Declaration of variables*/
   int var,n,fact=1,c1=1,c=1,i;
   float sum=1,numerator,x;
   clrscr();
   /*Check and input the value of x and n*/
   do
     {
      printf("\n enter the value of x where 0 < x <=2 \n");
      scanf("%f",&x);
     }
   while(x<=0||x>2);
   printf("\n enter the number of times we want to add the terms \n");
   scanf("%d",&n);
   var=1;
   /*Find the sum of the given series*/
   while(c1<=n-1)
     {
     fact=1;
     for(i=1;i<=var;i++)
       {
       fact=fact*i;
       }
     numerator=pow(x,c);
     c=c+1;
     c1=c1+1;
     var=var+1;
     sum=sum+(numerator/fact);
     }
   printf("\n the sum of the series is\n");
   printf("%f",sum);
   getch();
}
/**************************OUTPUT***************************
************************1ST RUN*****************************

 enter the value of x where 0 < x <=2
3

 enter the value of x where 0 < x <=2
-5

 enter the value of x where 0 < x <=2
.4

 enter the number of times we want to add the terms
3

 the sum of the series is
1.480000
**************************************************************
*********************2ND RUN**********************************

 enter the value of x where 0 < x <=2
2

 enter the number of times we want to add the terms
3

 the sum of the series is
5.000000
******************************************************************/

