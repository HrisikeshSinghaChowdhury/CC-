/**********************FIBONACCI SERIES USING RECURSION*********************/
#include<stdio.h>
#include<conio.h>
static int a=0,b=1,s=0,n;                   //Static variables declaration
void main()
{
   void fib(int x,int y,int z);            //Function Prototype declaration
   clrscr();

   /*Declaration of variables*/
   printf("\n enter the number of terms  :");
   scanf("%d",&n);


   printf("%d , %d ",a,b);                 //Print the first two terms of the fibonacci series

   fib(a,b,n-2);                           //Function call
   getch();
}



void fib(int x,int y,int z)                //Function definition
{
   if(z>=1)
     {
     s=x+y;
     printf(",%d ",s);
     x=y;
     y=s;
     fib(x,y,z-1);                         //Recursive call
     }
}
