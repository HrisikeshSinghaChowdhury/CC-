#include<stdio.h>
#include<conio.h>
void main()
{
   char num[50],out[50];
   int i,l;
   clrscr();
   printf("\n Enter the binary number");
   gets(num);
   printf("\n The original number is ");
   puts(num);
   l=strlen(num);
   for(i=0;i<l;i++)
   {
       if(num[i]=='0')
	  out[i]='1';
       if(num[i]=='1')
	  out[i]='0';
   }
   printf("\n The 1's complement is ");
   for(i=0;i<l;i++)
   printf("%c",out[i]);
   getch();
}