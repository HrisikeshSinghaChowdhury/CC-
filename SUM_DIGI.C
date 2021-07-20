#include<stdio.h>
#include<conio.h>
void main()
{
   int n,temp,sum=0,rem;
   clrscr();
   printf("\n enter a non negeative integer :");
   scanf("%d",&n);
   temp=n;
   while(temp>0)
      {
      rem=temp%10;
      sum=sum+rem;
      temp=temp/10;
      }
   printf(" \n the sum of the digits of the number %d is = %d",n,sum);
   getch();
}
