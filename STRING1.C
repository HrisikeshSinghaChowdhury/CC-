#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[80],l,i=0;
   clrscr();
   gets(ch);
   printf("%s \n",ch);
   l=strlen(ch);
   printf("\n %d\n",l);
   for(i=l-1;i>=0;i--)
   printf("%c",ch[i]);
   getch();
}