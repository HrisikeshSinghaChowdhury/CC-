#include<stdio.h>
#include<conio.h>
void main()
{
int a=65,m=69,k,i,j,b,s=0,s1=1,sp=1;
clrscr();
for(i=1;i<=6;i++)
{
printf("%c",a);
a++;
}
a=65;
b=m;
for(i=1;i<=5;i++)
{
printf("%c",b);
b--;
}
printf("\n");

for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%c",a);
a++;
}
b=m;



for(k=1;k<=sp;k++)
printf(" ");

b=m;
for(k=1;k<=i;k++)
{
printf("%c",b);
b--;
}
a=65;m--;sp=sp+2;
printf("\n");
}





getch();
}