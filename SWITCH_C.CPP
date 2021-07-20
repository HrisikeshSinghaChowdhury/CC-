#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
int m[50],m1[50],temp,n,n1,i=0,c,ch,temp1,rem,rem1,sum1=0,i1=0,a=0,k,sum=0;
clrscr();
printf(" \n**************MENU*****************\n");
printf("\n1.decimal to binary\n");
printf("\n2.binary to decimal\n");
printf("\n3.exit\n");
printf("\nenter your choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n enter the decimal number \n");
scanf("%d",&n);
temp=n;
while(temp>0)
{
rem=temp%2;
sum=(int)(sum+pow(10,i)*rem);
temp=temp/2;
i++;
}
printf("\n the eqivalent binary number is \n");
printf("%d",sum);
getch();
break;

case 2:
printf("\n enter the binary number\n");
scanf("%d",&n1);
temp1=n1;
while(temp1>0)
{
rem1=temp1%10;
m1[i1++]=rem1;
temp1=temp1/10;
}
for(k=0;k<i1;k++)
{
sum1=sum1+m1[k]*pow(2,a);
a++;
}
printf("\n the decimal equivalent is\n");
printf("%d",sum1);
getch();
break;
case 3:
exit(0);
default:
printf("\n enter the proper choice \n");
getch();
break;
}
}

