#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the three unequal numbers \n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a>c)
printf("\n the biggest number is %d",a);
if(b>a&&b>c)
printf("\n the biggest number is %d",b);
if(c>a&&c>b)
printf("\n the biggest number is %d",c);
getch();
}