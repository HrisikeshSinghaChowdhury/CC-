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
for(j=i+1;j<n-1;j++)
{
if(m[i]>m[j])
{
t=m[i];
m[i]=m[j];
m[j]=t;
}
}
}


for(i=0;i<n;i++)
printf("%d",m[i]);
getch();
}
