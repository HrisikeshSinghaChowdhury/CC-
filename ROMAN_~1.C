#include<stdio.h>
#include<conio.h>
static int num,i,j;
static char out[20]=" ";
void main()
{
void unit_digit(int );
void tenth_digit(int );
void hundredth_digit(int );
void thousandth_digit(int );
int temp,rem,c=0;
clrscr();
printf("\nenter any number less than 10,000  :");
scanf("%d",&num);
printf("\n the roman number format is as follows");
printf("\n1=I\n5=V\n10=X\n50=L\n100=C\n500=D\n1000=M");

temp=num;
while(temp>0)
{
//rem=temp%10;
temp=temp/10;
c++;
}
switch(c)
{
case 1:
unit_digit(num);
break;
case 2:
tenth_digit(num);
break;
case 3:
hundredth_digit(num);
break;
case 4:
thousandth_digit(num);
break;
default:
printf("enter any number less than 10,000");
break;
}
printf("\n roman eqivalent of \t %d \t is %s",num,out);
getch();
}
void unit_digit(int k0)
{
int m[]={1,2,3,4,5,6,7,8,9};
char rom[9][20]={"I","II","III","IV","V","VI","VII","VIII","IX"};
for(j=0;j<9;j++)
{
if(m[j]==k0)
strcat(out,rom[j]);
}}
 void tenth_digit(int k)
{
int n,rem,t=0;
if(k<=49)
{
n=k/10;
rem=k%10;
for(i=1;i<=n;i++)
strcat(out,"X");
}
else
{
n=k/50;
rem=k%50;
for(i=1;i<=n;i++)
strcat(out,"L");
t++;
}
if(t>0)
tenth_digit(rem);
else
unit_digit(rem);
}
void hundredth_digit(int k1)
{
int n1,rem1,p=0;
if(k1<=499)
{
n1=k1/100;
rem1=k1%100;
for(i=1;i<=n1;i++)
strcat(out,"C");
}
else
{
n1=k1/500;
rem1=k1%500;
for(i=1;i<=n1;i++)
strcat(out,"D");
p++;
}
if(p>0)
hundredth_digit(rem1);
else
tenth_digit(rem1);
}

 void thousandth_digit(int k2)
{
int n3,rem3;
n3=k2/1000;
rem3=k2%1000;
for(i=1;i<=n3;i++)
strcat(out,"M");
hundredth_digit(rem3);
}