/*******************TO PRINT AN  A.P. SERIES AND IT'S SUM WHERE THE FIRST TERM,COMMON DIFFERENCE AND NUMBER OF TERMS ARE INPUTTED FROM THE USER***********/
#include<stdio.h>
#include<conio.h>
voi
void main()
   {
   /*Declaration of variables*/
   int a,d,n,sum,term,i;
   clrscr();
   /*Input the first term,common difference and the number of terms from the user*/
   printf("\n enter the 1st term\n");
   scanf("%d",&a);
   printf("\n enter the common difference\n");
   scanf("%d",&d);
   printf("\n enter the number of terms we want to print in the A.P series\n");
   scanf("%d",&n);
   /*Print the A.P. series*/
   printf("\n***************A.P SERIES IS******************\n");
   term=a;
   sum=a;
   printf("%d",term);
   for(i=1;i<=n-1;i++)
      {
      term=term+d;
      printf(",%d",term);
      sum=sum+term;
      }
   printf("\n");
   /*Print the sum of the series*/
   printf("\n************SUM OF THE A.P SERIES IS**********\n");
   printf("%d",sum);
   getch();
}
/***********************OUTPUT**************************
/*********************1ST RUN***************************

 enter the 1st term
2

 enter the common difference
2

 enter the number of terms we want to print in the A.P series
10

***************A.P SERIES IS******************
2,4,6,8,10,12,14,16,18,20

************SUM OF THE A.P SERIES IS*********
110
*****************************************************
********************2ND RUN***************************

 enter the 1st term
2

 enter the common difference
-2

 enter the number of terms we want to print in the A.P series
10

***************A.P SERIES IS******************
2,0,-2,-4,-6,-8,-10,-12,-14,-16

************SUM OF THE A.P SERIES IS**********
-70
**************************************************************/


