/* PROGRAM TO FIND THE DAY OF THE CORRESPONDING DATE */

# include<stdio.h>
# include<conio.h>

void main()
{
   int month_a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
   int date,month,year,i,r,s=0,flag=0;
   clrscr();
   printf("\nEnter a valid date (dd/mm/yyyy) : ");
   printf("\n\tEnter date : ");
   scanf("%d",&date);
   printf("\tEnter monthe : ");
   scanf("%d",&month);
   printf("\tEnter year : ");
   scanf("%d",&year);
   if(((year%100!=0) && (year%4==0)) || (year%400==0))
   {
      flag = 1;
      month_a[2] = 29;
   }
   for(i=0;i<month-1;i++)
	s = s + month_a[i];
   s = s + date + year + (year/4)-2;
   s = s%7;
   if (flag == 1)
    s = s - 1;

   if (s == 0)
      printf("\nThe day is : Sunday");
   else if (s == 1)
      printf("\nThe day is : Monday.");
   else if (s == 2)
      printf("\nThe day is : Tuesday.");
   else if (s == 3)
      printf("\nThe day is : Wednesday.");
   else if (s == 4)
      printf("\nThe day is : Thursday.");
   else if (s == 5)
      printf("\nThe day is : Friday.");
   else
     printf("\nThe day is : Saturday.");
   getch();
}

