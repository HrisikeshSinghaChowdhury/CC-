#include<stdio.h>
#include<conio.h>
void main()
{
   int x,y,small,large,q,a,b,d;
   clrscr();
   printf("\n enter the first positive number :");
   scanf("%d",&x);
   printf("\n enter the second positive number :");
   scanf("%d",&y);
   if(x>=y)
   {
   large=x;
   small=y;
   }
   else
   {
   large=y;
   small=x;
   }

   a=1;
   while(a>0)
   {
   q=large/small;
   a=large-(q*small);
   printf("\n %d / %d = %d\t\t %d-(%d*%d)=%d",large,small,q,large,q,small,a);
   b=small;
   small=a;
   large=b;
   }
  printf("\n HCF IS =%d",b);
  getch();
}