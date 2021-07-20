#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m[50];
clrscr();
printf("\n enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n enter the element");
scanf("%d",&m[i]);
}
for(i=0;i<n;i++)
printf("%d,",m[i]);
getch();
}