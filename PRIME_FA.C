/**************************PRIME FACTORS OF A NUMBER USING FUNCTION*************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
/********Definition of function isPrime()**********/
/********The function isPrime() returns 1 if the number is prime otherwise 0*******/
int isPrime(int n)                    //Function definition
{
   int i,s=sqrt(n);
   if(n<=1)
      return(0);                      //Returns 0 if the number is less than 0
   if( (n==2) || (n==3))
      return(1);                      //Returns 1 if the number is 2 or 3
   if( (n%2)==0)
      return(0);                      //Returns 0 if the number is even except 2
   for(i=3;i<=s;i=i+2)
      {
      if( (n%i)==0)
	 return(0);                   //Returns 0 if the number is divisible by the odd numbers less than it
      }
return(1);                            //Returns 1 if the above conditions is not satisfied
}
/**********************End of function definition**************************************/
/**********************Stub to print the prime factors of a number**********************/


void main()
{

   int isPrime(int n);

   /*Declaration of variables*/
   int num,i;
   clrscr();

   /*Check for input validation*/
   printf("\n Enter a non negative integer  :");
   scanf("%d",&num);

   printf("\n***************************************************************");
   if(num<=0)
      {
       printf("\n Incorrect input.");
      }
   else
      {
      /*Print the prime factors of the number*/
      printf("\n The prime factors of %d are \n ",num);
      for(i=2;i<=num/2;i++)
	 {
	 if(num%i==0)                 //To find the factors of the number
	    {
	    if(isPrime(i))            //The function isPrime is being called
	       printf("%d ",i);       //To find the prime factors and to print them
	    }
	 }

     if(isPrime(num))                 //To print the number if it itself is a prime factor
     printf("%d ",num);
     }
   printf("\n***************************************************************");

getch();
}                                     //End of main function
/************************End of the program****************************************/
/************************OUTPUT****************************************************
***************************1ST RUN*************************************************

 Enter a non negative integer  :36

***************************************************************
 The prime factors of 36 are
 2 3
***************************************************************
*****************2ND RUN****************************************

 Enter a non negative integer  :-24

***************************************************************
 Incorrect input.
***************************************************************
********************3RD RUN***********************************

 Enter a non negative integer  :4650

***************************************************************
 The prime factors of 4650 are
 2 3 5 31
***************************************************************
***************4TH RUN*****************************************

 Enter a non negative integer  :4935

***************************************************************
 The prime factors of 4935 are
 3 5 7 47
***************************************************************
/


