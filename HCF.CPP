#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int k=1,i,c=0,n;
printf("\n enter the decimal number");
scanf("%d",&n);
while(k>=1)
{
k=k/2;
c++;
}
int m[50];
for(i=0;i<=c;i++)
{
m[i]=n%2;
n=n/2;
}
for(i=c;i>=0;i++)
printf("%d",m[i]);

getch();
}
