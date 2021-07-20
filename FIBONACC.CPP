#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,c,i;
clrscr();
printf("\n enter the times you want to print the fibonacci series \n");
scanf("%d",&n);
n=n-2;
printf("\n the fibonacci series is as follows \n");
printf("\n %d",a);
printf(", %d",b);
for(i=1;i<=n;i++)
{
c=a+b;
printf(", %d",c);
a=b;
b=c;
}
getch();
}