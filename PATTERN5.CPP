#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,sp=4,k;
clrscr();
printf("\n enter the range \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=sp;k>=1;k--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
sp=sp-1;
printf("\n");
}
getch();
}
