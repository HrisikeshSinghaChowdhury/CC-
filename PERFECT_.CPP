#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0,i;
clrscr();
printf("\n the perfect numbers are\n");
for(n=2;n<=100;n++)
{
sum=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
sum=sum+i;
}
}
if(sum==n)
printf("%d",n);
}
getch();
}
