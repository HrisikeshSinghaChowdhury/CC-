/*===========================TO FIND THE H.C.F AND L.C.M. OF TWO NUMBERS=====================*/
#include<stdio.h>
#include<conio.h>
void main()
{
   /*Declaration of variables*/
   int a,b,rem,divisor,dividend,hcf,lcm;
   clrscr();
   /*Input the two numbers*/
   printf("\n enter the two numbers \n");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("\n the numbers are %d\tand\t%d",a,b);
   /*Initialise the dividends and divisor accordingly*/
   if(a>b)
      {
      dividend=a;
      divisor=b;
      }
   else
      {
      dividend=b;
      divisor=a;
      }
   /*Find the remainder*/
     rem=dividend%divisor;
   /*Executes the statement inside the loop until the value of remainder is 0*/
   while(rem!=0)
      {
      dividend=divisor;
      divisor=rem;
      rem=dividend%divisor;
      }
   /*Find the value of hcf and lcm respectively*/
   hcf=divisor;
   lcm=(a*b)/hcf;
   printf("\n H.C.F is\t\t\t%d",hcf);
   printf("\n L.C.M is\t\t\t%d",lcm);
   getch();

}
/*==========================OUTPUT===================
****************1ST RUN*******************************

 enter the two numbers
56
60

 the numbers are 56     and     60
 H.C.F is                       4
 L.C.M is                       840

****************2ND RUN******************************

 enter the two numbers
24
12

 the numbers are 24     and     12
 H.C.F is                       12
 L.C.M is                       24

**************3RD RUN*******************************

 enter the two numbers
31
29

 the numbers are 31     and     29
 H.C.F is                       1
 L.C.M is                       899

*/