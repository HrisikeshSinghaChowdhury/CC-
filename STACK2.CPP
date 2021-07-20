#include<stdio.h>
#include<conio.h>
void push();
void pop();
int stack[10],i,n,item,top=0,s=0,m[10],p=0;
void main()
{
int c1=1,c=1;
clrscr();
while(c==1)
{
 push();
printf("\n do you want to continue pushing?enter 1 to continue or 0 to terminate");
scanf("%d",&c);
}
while(c1==1)
{
pop();
printf("\n do you want to continue poping?enter 1 to continue or 0 to end");
scanf("%d",&c1);
}
getch();
}
void push()
{
top=0;
printf("\n enter the element you want to push");
scanf("%d",&item);
stack[top]=item;
s++;p=0;
for(i=0;i<s;i++)
{
printf("%d",stack[i]);
m[p++]=stack[i];
printf(",");
}
int cnt=s;
while(cnt>=0)
{
stack[cnt]=stack[cnt-1];
cnt=cnt-1;
}
}
void pop()
{
int cnt2=0;
if(s!=0)
{
while(cnt2<s-1)
{
m[cnt2]=m[cnt2+1];
cnt2=cnt2+1;
}}
else
{
printf("\n no element to pop....the stack underflows");
}
for(i=0;i<s-1;i++)
{
printf("%d",m[i]);
printf(",");

}
s--;
}
