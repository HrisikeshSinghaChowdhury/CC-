#include<stdio.h>
#include<conio.h>
void main()
{
  int i,k,sp1=26,sp2=13;
  clrscr();
  for(i=1;i<=4;i++)
  {
  if(i==1)
  {
  for(k=1;k<=33;k++)
  printf(" ");
  printf(".. .");
  }
  if(i>1&&i<=3)
  {
  if(i==2)
  {
  for(k=1;k<=30;k++)
  printf(" ");
  printf(".");
  printf("      . ");
  for(k=1;k<=4;k++)
  printf(" ");
  printf(".. ");
 // printf(".");
  }
  else
  {
  for(k=1;k<=sp1;k++)
  printf(" ");
  printf(".");
  for(k=1;k<=sp2;k++)
  printf(" ");
  printf(". .");
  printf("   .");
  sp1=sp1-3;sp2=sp2+6;
  }}
  printf("\n");
  }
  getch();
}
