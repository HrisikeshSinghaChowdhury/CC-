#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a=1,k;
clrscr();
printf("\n enter the range \n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
a=1;
for(j=1;j<=i;j++)
{
printf("%d",a);
a++;
}
printf("\n");
}
getch();
}
