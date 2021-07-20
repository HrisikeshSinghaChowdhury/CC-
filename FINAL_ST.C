/* ARRAY IMPLEMENTATION OF STACK */

#include<stdio.h>
#include<conio.h>
/*Declarations of static variables*/
static int stack[10], top = -1,response=0;

/*Function declarations*/
void push(int item);//User defined function to push elements into the stack
int pop();//User defined function to pop elements from the stack

void main()
{
   /*Declarations of variables*/
   int i,num; char option,ans='y';
   clrscr();
   printf("\n\t\tIMPLEMENTATION OF STACK USING ARRAY");
   printf("\n\t\t-----------------------------------");
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

void push(int a)//Function definition of push()
{
   top ++;
   if(top >= 10)//If the stack overflows
   {
	printf("\n\t\t\t:Stack Overflow");
	response++;
	top=top-1;
	return;
   }
    stack[top] = a;
}

int pop()//Function definition of pop()
{
    int p;
    if (top == -1)//If the stack underflows
    {
	printf("\n\t\t\t\t\t   :stack underflow");
	return(-9999);
    }
    p = stack[top];
    top--;
    return(p);//Return the value that is popped
}
/*******************OUTPUT***********************

		IMPLEMENTATION OF STACK USING ARRAY
		-----------------------------------
Do you want to push(U) / pop(O) ?u
			Enter element to push : 45

Another operation?(Y/N)y
Do you want to push(U) / pop(O) ?7

Incorrect option!!!
Another operation?(Y/N)y
Do you want to push(U) / pop(O) ?o
			Popped item : 45
Another operation?(Y/N)y
Do you want to push(U) / pop(O) ?o
					   :stack underflow
Another operation?(Y/N)n
**************************************************/