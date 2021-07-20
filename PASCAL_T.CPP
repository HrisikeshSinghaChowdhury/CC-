#include<stdio.h>
#include<conio.h>
void main()
{
int m[50],k,n,p,a,b,c,x=1,i=2,y=0,t=2,l=1,r=0,sp;
clrscr();
printf("\n enter the size of pascal triangle \n");
scanf("%d",&n);
sp=n+6;
m[y]=1;
for(k=1;k<=n;k++)
{
for(p=1;p<=sp;p++)
{
printf(" ");
}
if(l<=2)
{
if(l-1!=y)
{
m[y]=1;
m[l-1]=1;
printf("%d   ",m[y]);
printf("%d   ",m[l-1]);
printf("\n");
l++;
}
else
{
printf("%d   ",m[y]);
printf("\n");
l++;
}}
else
{
printf("%d   ",m[y]);
a=m[0];b=m[1];
while(i<=t)
{
c=a+b;
printf("%d   ",c);
m[x]=c;
x++;
a=b;
b=m[i];
i++;
r++;
}
t=r+2;
m[t-1]=1;
printf("%d   ",m[t-1]);
printf("\n");
i=2;
x=1;
r=0;
}
sp=sp-2;
}
getch();
}