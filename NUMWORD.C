/* PROGRAM FOR TAKE A NUMBER AND PRINT THE NUMBER IN WORD */

# include<stdio.h>
# include<conio.h>
# include<process.h>

/* Function that converts numbers in words */
void twodigit(int x)
{
   char *a[20] = {" "," ONE"," TWO"," THREE"," FOUR"," FIVE"," SIX"," SEVEN"," EIGHT"," NINE"," TEN"," ELEVEN"," TWELVE"," THIRTEEN"," FOURTEEN"," FIFTEEN"," SIXTEEN"," SEVENTEEN"," EIGHTEEN"," NINETEEN"};
   char *b[8] = {" TWENTY"," THIRTY"," FOURTY"," FIFTY"," SIXTY"," SEVENTY"," EIGHTY"," NINETY"};

   if (x < 20)
      printf(" %s",a[x]);
   else
      printf("%s %s",b[x/10-2],a[x%10]);
}

void main()
{
   long int num,n;
   clrscr();
   printf("Enter the number : ");
   scanf("%ld",&num);
   if (num <= 0)
   {
      printf("\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ERROR !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
      printf("\n\nEnter positive number and try again.");
      getch();
      exit(0);
   }
   printf("\nIn words %ld can be written as :-\n",num);
   n = num / 10000000L;
   if (n != 0)
   {
      twodigit((int) n);
      printf(" CRORE");
   }
   num = num % 10000000L;
   n = num / 100000L;
   if (n != 0)
   {
      twodigit((int) n);
      printf(" LAKHS");
   }
   num = num % 100000L;
   n = num / 1000L;
   if (n != 0)
   {
      twodigit((int) n);
      printf(" THOUSAND");
   }
   num = num % 1000L;
   n = num / 100L;
   if (n != 0)
   {
      twodigit((int) n);
      printf(" HUNDRED");
   }
   num = num % 100L;
   twodigit((int) num);
   printf(" ONLY.");
   getch();
}
