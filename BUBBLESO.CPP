#include<stdio.h>
#include<conio.h>
void main()
{
int m[10],i,n,j,t=0;
clrscr();
printf("enter the length of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&m[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(m[j]>m[j+1])
{
t=m[j];
m[j]=m[j+1];
m[j+1]=t;
}
}
}


for(i=0;i<n;i++)
printf("%d",m[i]);
getch();
}
