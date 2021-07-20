#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,i,j,n,sp=4,k;
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
printf("%d",a);
a++;
}
a=1,sp=sp-1;
printf("\n");
}
getch();
}
