#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *link;
};

typedef struct stack node;

static node *top;

void push(int item)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	newnode->data=item;
	newnode->link=top;
	top=newnode;
}

int pop()
{
	int x=-9999;
	if(top==NULL)
	{
		printf("\nStack Empty");
		return(x);
	}
	x=top->data;
	top=top->link;
	return(x);
}

void main()
{
	 char option,ans;
	 int num;
    top=NULL;
    clrscr();
	 do
	 {
		  printf("\nDo you want to push(U) / pop(O) ?");
		  option=getche();
		  switch(option)
		  {
			case 'U':
			case 'u':
			  printf("\n\t\t\tEnter element to push : ");
			  scanf("%d",&num);
			  push(num);
			  break;
			case 'o':
			case 'O':
			  num=pop();
			  if(num!=-9999)
				  printf("\n\t\t\tPopped item : %d",num);
			  break;
			default:
			  printf("\n\nIncorrect option!!!");
			}
			printf("\nAnother operation?(Y/N)");
			ans=getche();
		}while((ans=='Y')||(ans=='y'));
}
/**********************OUTPUT************************

Do you want to push(U) / pop(O) ?u
			Enter element to push : 12

Another operation?(Y/N)y
Do you want to push(U) / pop(O) ?u
			Enter element to push : 56

Another operation?(Y/N)y
Do you want to push(U) / pop(O) ?o
			Popped item : 56
Another operation?(Y/N)n
**********************************************/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
