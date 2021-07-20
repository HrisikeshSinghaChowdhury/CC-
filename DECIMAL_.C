#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   long int temp,n,i=1,rem,sum=0;
   int ch;
   clrscr();
   printf(" \n**************MENU*****************\n");
   printf("\n1.decimal to binary\n");
   printf("\n2.binary to decimal\n");
   printf("\n3.exit\n");
   printf("\nenter your choice \n");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
       printf("\n enter the decimal number \n");
       scanf("%ld",&n);
       temp=n;
       while(temp>0)
       {
	    rem=temp%2;
	    sum=sum+(i*rem);
	    temp=temp/2;
	    i=i*10;
       }
      printf("\n the binary equivalent of %ld is = %ld ",n,sum);
      getch();
      break;

      case 2:
      printf("\n enter the binary number\n");
      scanf("%ld",&n);
      temp=n;
      while(temp>0)
      {
	  rem=temp%10;
	  sum=sum+(i*rem);
	  temp=temp/10;
	  i=i*2;
      }
      printf("\n the decimal equivalent of %ld is = %ld",n,sum);
      getch();
      break;
      case 3:
      exit(0);
      default:
      printf("\n enter the proper choice \n");
      getch();
      break;
  }
}

