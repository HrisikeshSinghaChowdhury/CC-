#/*******************PRIME NUMBER USING FUNCTIONS**********************/
#include<stdio.h>
#include<conio.h>

void main()
   {

   /*Function Prototype Declaration*/
   int prime(int n);

   /*Declarations of variables*/
   int c=0,num,lower,upper,check=0;
   clrscr();


   /*Check for input validations for both lower and upper limits*/
      do
      {
      printf("\n enter the lower limit which must be greater than 1    :");
      scanf("%d",&lower);
      }
      while(lower<=1);


      do
      {
      printf("\n enter the upper limit which must be greater than the lower limit   :");
      scanf("%d",&upper);
      }
      while(upper<=lower);


   printf("*******************************************************************\n");
   printf("\nTHE PRIME NUMBERS WITHIN THE RANGE %d and %d ARE AS FOLLOWS \n",lower,upper);
   num=lower;
   printf("\n");


   while(num<=upper)
       {

   /*Function call*/
       c=prime(num);

   /*Print the prime numbers within the range if any*/
	  if(c==0)
	  {
	   printf("%d,",num);
	   check=check+1;
	  }
      num=num+1;
       }


   /*Print a messege if there is no prime numbers within the range*/
   if(check==0)
   printf("\nTHERE ARE NO PRIME NUMBERS BETWEEN THE RANGE %d AND %d \n",lower,upper);

   getch();
}

   /*Function definition*/
   int prime(int n)
   {
      int i,k=0;
      for(i=2;i<n;i++)
      {
      if(n%i==0)
      k=k+1;
      }
   /*This function "prime(n)" returns 0 if the number is prime */
   return(k);
   }

