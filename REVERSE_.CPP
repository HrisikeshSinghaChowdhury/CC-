#include<stdio.h>
#include<conio.h>
void main()
{
int temp,rem,n;
clrscr();
printf(" \n enter the number \n");
scanf("%d",&n);
printf("\n the reverse of the number is ");
temp=n;
while(temp>0)
{
rem=temp%10;
printf("%d",rem);
temp=temp/10;
}

getch();
}