#include<stdio.h>
#include<conio.h>
void push();
void pop();
void display();
void top_element();
int stack[10],top=-1,c=1,c1=1,cnt,n,i=0,a,j;
void main()
{
   clrscr();
   while(c==1)
   {
       push();
       display();
       printf("\n do you want to continue pushing element in the stack?enter 1 to continue or 0 to terminate");
       scanf("%d",&c);
   }
   while(c1==1)
   {
       pop();
       printf("\n do you want to continue poping element from the stack?enter 1 to continue");
       scanf("%d",&c1);
   }
   getch();
}


void push()
{



    i++;cnt=i-1;
    while(cnt >0)
    {
	stack[cnt]=stack[cnt-1];
	cnt=cnt-1;
    }

    printf("\n enter the element to be pushed in the stack :");
    scanf("%d",&stack[0]);
}
void pop()
{
    cnt=0;
    if(i==0)
    {
       printf("stack underflows");
    }
    else
    {
    top_element();
    while(cnt<i)
    {
	stack[cnt]=stack[cnt+1];
	cnt=cnt+1;


    }
    i=i-1;
    printf("\n the stack after poping :");
    for(j=0;j<i;j++)
    printf("%d ",stack[j]);
    }


}
void top_element()
{
   printf("\n the top element is now %d :",stack[0]);
}

void display()
{
    int j,a;
    printf("\n the stack is\t ");
    for(j=0;j<i;j++)
    printf("%d  ",stack[j]);
    top_element();
}

