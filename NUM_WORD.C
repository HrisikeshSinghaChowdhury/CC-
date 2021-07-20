#include<stdio.h>
#include<conio.h>
#include<string.h>
static int m[]={1,2,3,4,5,6,7,8,9};
static char ch[9][20]={"one","two","three","four","five","six","seven","eight","nine"};
static char result[20]="";
void main()
{
void unit(int n1);
void tenth(int n2,int n3);
void hundred(int n4,int n5,int n6);
void thousand(int n17,int n8,int n9,int n10);
int num,i,temp,rem,c=0,m1[50];
clrscr();
printf("\n enter the number less than 1000.");
scanf("%d",&num);


temp=num;
while(temp>0)
{
rem=temp%10;
m1[c++]=rem;
temp=temp/10;
}
if(c==1)
unit(m1[0]);
if(c==2)
tenth(m1[1],m1[0]);
if(c==3)
hundred(m1[2],m1[1],m1[0]);
if(c==4)
thousand(m1[3],m1[2],m1[1],m1[0]);

printf("\n %s",result);
getch();

}

void unit(int n1)
{
int i;
for(i=0;i<9;i++)
{
if(m[i]==n1)
strcat(result,ch[i]);
}
strcat(result," ");
}
void tenth(int n2,int n3)
{
int x;
if(n3==0)
{
//int m2[]=[10,20,30,40,50,60,70,80,90};
char ch2[9][20]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

for(x=0;x<9;x++)
{
if(m[x]==n2)
strcat(result,ch2[x]);
}
strcat(result," ");
}
else
{
if(n2==1&&n3<=9)
{
//int m2[]={11,12,13,14,15,16,17,18,19};
char ch1[10][20]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
for(x=0;x<9;x++)
{
if(m[x]==n3)
strcat(result,ch1[x]);
}
strcat(result," ");
}
else
{
char ch3[9][20]={" ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
for(x=0;x<9;x++)
{
if(m[x]==n2)
strcat(result,ch3[x]);
}
strcat(result," ");
unit(n3);
}}}

void hundred(int n6,int n5,int n4)
{
int y;
if(n5==0&&n4==0)
{
for(y=0;y<9;y++)
{
if(m[y]==n6)
strcat(result,ch[y]);
}
strcat(result," ");
strcat(result," hundred ");
}

else
{
for(y=0;y<9;y++)
{
if(m[y]==n6)
strcat(result,ch[y]);
}
strcat(result," ");
strcat(result," hundred ");
strcat(result," and ");
if(n5==0)
unit(n4);
if(n5!=0)
tenth(n5,n4);
}}

void thousand(int n10,int n9,int n8,int n7)
{
int z;
if(n9==0&&n8==0&&n7==0)
{
for(z=0;z<9;z++)
{
if(m[z]==n10)
strcat(result,ch[z]);
}
strcat(result," ");
strcat(result,"thousand");
}
else
{
if(n9==0)
{
for(z=0;z<9;z++)
{
if(m[z]==n10)
strcat(result,ch[z]);
}
strcat(result," ");
strcat(result,"thousand");
strcat(result," and");
tenth(n8,n7);
}
if(n8==0)
{
for(z=0;z<9;z++)
{
if(m[z]==n10)
strcat(result,ch[z]);
}
strcat(result," ");
strcat(result,"thousand");
strcat(result," and ");
hundred(n9,n8,n7);
}
if(n10!=0&&n9!=0&&n8!=0&&n7!=0)
{
for(z=0;z<9;z++)
{
if(m[z]==n10)
strcat(result,ch[z]);
}
strcat(result," ");
strcat(result,"thousand");
strcat(result," and");
hundred(n9,n8,n7);
}
}
}