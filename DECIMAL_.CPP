#include<stdio.h>
#include<conio.h>
void main()
{
int m[50],temp,n,i=0,c;
clrscr();
printf("\n enter the decimal number \n");
scanf("%d",&n);
temp=n;
while(temp!=1)
{
m[i]=temp%2;
temp=temp/2;
i++;
}
m[i]=1;
printf("\n the eqivalent binary number is \n");
for(c=i;c>=0;c--)
printf("%d",m[c]);
getch();
}