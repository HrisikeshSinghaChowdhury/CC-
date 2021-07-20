/* Program to check whether a year is leapyear or not */

# include<stdio.h>
# include<conio.h>

/******************************************************/
/* Definition of Function isLeap() ********************/
/* returns 1 if year is leap, otherwise returns 0 *****/
/******************************************************/

int isLeap( int year)
{
   if ( (year%4)!=0 )   // Non - leap year not divisible by 4
      return 0;
   if ( (year%100)!=0 )  // Year divisible by 4 but not by 100
      return 1;
   if ( (year%400)==0 ) // Year divisible by 400
      return 1;
   return 0;     // Year divisible by 4 and 100 but not by 400
}
/*****  End of Function Definition  *******************/

/***** Stub to test isLeap ****************************/
void main()
{
   long int year;
   clrscr();

   printf("Enter year : ");
   scanf("%ld",&year);

   if ( isLeap(year))
      printf( "\n%ld is a leap year", year);
   else
      printf("\n%ld is not a leap year", year);

   getch();
}
/*****   End of Program   *****************************/
