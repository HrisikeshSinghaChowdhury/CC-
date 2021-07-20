#include<stdio.h>
#include<conio.h>
static int m[5];
int *array()
{
   int i;
   for(i=0;i<5;i++)
   {
      m[i]=(i+1);
   }
   return(m);

}
void main()
{
   int *p,j;
   p=array();
   for(j=0;j<5;j++)
   {
      printf("\n%d",*(p+j));
   }
   getch();
}