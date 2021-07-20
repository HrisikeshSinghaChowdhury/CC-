/********************TO PRINT THE FIBONACCI SERIES*********************/
#include<stdio.h>
#include<conio.h>
void main()
{
   /*Declaration of variables*/
   int n,c=0,a=0,b=1,i=1;
   clrscr();
   /*Input the number of terms we want to print*/
   printf("\n enter the number of terms we want to print\n");
   scanf("%d",&n);
   printf("\n The fibonacci series is as follows\n");
   /*Print the first two terms*/
   printf("%d",a);
   printf(", %d",b);
   /*Print the rest of the terms of the fibonacci series*/
   while(i<=n-2)
     {
     c=a+b;
     printf(", %d",c);
     a=b;
     b=c;
     i=i+1;
     }
   getch();
}
/**************************OUTPUT***************************
************************1ST RUN****************************

 enter the number of terms we want to print
8

 The fibonacci series is as follows
0, 1, 1, 2, 3, 5, 8, 13

**************************************************************
*********************2ND RUN**********************************

 enter the number of terms we want to print
20

 The fibonacci series is as follows
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 41
81
******************************************************************/

