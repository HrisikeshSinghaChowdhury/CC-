#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int n=42,rem,sum=0,i=0;
   clrscr();
   while(n>0)
   {
   rem=n%2;
   sum=sum+pow(10,i)*rem;
   i++;
   n=n/2;
   }
   printf("%d",sum);
getch();
}