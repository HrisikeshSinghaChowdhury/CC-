#include<stdio.h>
#include<conio.h>
void main()
{
int m[50][50],m1[50][50],add[50][50],x,x1,y,y1,i,j;
clrscr();
printf("\n enter the row of first matrix");
scanf("%d",&x);
printf("\n enter the column of first matrix");
scanf("%d",&x1);
printf("\n enter the row of second matrix");
scanf("%d",&y);
printf("enter the column of second matrix");
scanf("%d",&y1);
if(x==y&&x1==y1)
{
printf("\n addition of matrix is possible");
printf("\n enter the elements of first matrix");
for(i=0;i<x;i++)
{
for(j=0;j<x1;j++)
{
scanf("%d",&m[i][j]);
}}
printf("\n the 1st matrix is \n");
for(i=0;i<x;i++)
{
for(j=0;j<x1;j++)
{
printf("%d",m[i][j]);
printf(" ");
}
printf("\n");
}



printf("\n enter the elements of second matrix");
for(i=0;i<y;i++)
{
for(j=0;j<y1;j++)
{
scanf("%d",&m1[i][j]);
}}

printf("\n the 2nd matrix is \n");
for(i=0;i<x;i++)
{
for(j=0;j<x1;j++)
{
printf("%d",m1[i][j]);
printf(" ");
}
printf("\n");
}


for(i=0;i<x;i++)
{
for(j=0;j<x1;j++)
{
add[i][j]=m[i][j]+m1[i][j];
}}

 printf("\n the resultant matrix is \n");

for(i=0;i<x;i++)
{
for(j=0;j<x1;j++)
{
printf("%d",add[i][j]);
printf(" ");
}
printf("\n");
}
}
else
{
printf("matrix addition not possible");
}



getch();
}