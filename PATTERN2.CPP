#include<stdio.h>
#include<conio.h>
void main()
{
int a=5,i,j,n;
clrscr();
printf("\n enter the range \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d \t",a);
}
a--;
printf("\n");
}
getch();
}