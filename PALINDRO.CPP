#include<stdio.h>
#include<conio.h>
void main()
{
int i,temp,rem,rev;
clrscr();
printf("the palindrome numbers are as follows \n");
for(i=10;i<=500;i++)
{
temp=i;
while(temp>0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(rev==i)
printf("\t , %d",i);
rev=0,rem=0;
}
getch();
}