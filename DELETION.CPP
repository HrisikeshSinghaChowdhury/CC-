#include<stdio.h>
#include<conio.h>
void main()
{
int m[10],x[10],p,k=0,c=0,i,n;
clrscr();
printf("enter the length of array");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&m[i]);
printf("enter the position");
scanf("%d",&p);
k=p-1;
for(i=0;i<k;i++)
x[c++]=m[i];
for(i=p;i<n;i++)
x[c++]=m[i];
for(i=0;i<(n-1);i++)
printf("%d",x[i]);
getch();
}
