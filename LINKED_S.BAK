/* IMPLEMENTATION OF STACK USING LINKED LIST  */

#include<stdio.h>
#include<conio.h>
/*Structure Definition*/
typedef struct node
{
   int data;
   struct node * next ;
} node;

static struct node * top = NULL;
/*Function Declaration*/
void push();
int pop();
void print();
void top_element();


void main()
{
   int p; char ch;
   clrscr();
   printf("\n\t\tIMPLEMENTATION OF STACK USING LINKED LIST");
   printf("\n\t\t-----------------------------------------");
   printf("\n\nCreation of stack : \n");


   do
   {
		push();//Function call
		printf("\n\nYou have created the following stack : ");
		print();//Print the stack
		top_element();

		printf("\nDo you want to insert another element ? (y/Y)");
		ch = getche();

	}
   while(ch == 'y' || ch == 'Y');



   printf("\n\t\t-------------------------------------");
   printf("\n\n\n\nDeletion of element from stack : ");
   printf("\n\t\t-----------------------------------");


   do
   {

	    top_element();
	    p=pop();//function call and p holds the value of the node which is popped
	    printf("\n\nYour stack after poping the TOP element (%d):  ",p);
	    print();//Print the stack

	    printf("\n\nDo you want to delete another element ? (y/Y)");
	    ch = getche();
    }
    while(ch == 'y' || ch == 'Y');


 getch();
}

void push()//Function to push element into the linked stack
{
   struct node * newnode;
   newnode = (node *) malloc (sizeof (node));
   printf("\n\nInput data of newnode : ");
   scanf("%d", &newnode -> data);
   newnode -> next = top;
   top = newnode;
}

int pop()//Function to pop element from the linked stack
{
   int p;
   struct node * popnode;
   popnode = (node *) malloc (sizeof (node));
   popnode = top;
   top = top -> next;
   p = popnode -> data;
   free(popnode);
   return(p);
}

void print()//Function to print the elements of the linked stack
{
   node * list;
   if(top == NULL)
       printf("Stack is empty\n");
   else
   {
       list = top;
       while(list != NULL)
       {
		printf("%4d",list -> data);
		list = list -> next;
       }
   }

}
void top_element()//Function to print the top most element of the linked stack
{
   if(top == NULL)
       printf("\n [Stack is empty.No top element exists.]");
   else
       printf("\n\nTopmost element = %d",top -> data);
}
/********************Output**********************

	IMPLEMENTATION OF STACK USING LINKED LIST
	 -----------------------------------------
	Creation of Stack
Input data of newnode : 12

You have created the following stack :   12
/*Topmost element = 12

Do you want to insert another element ? (y/Y)y

Input data of newnode : 5
You have created the following stack :    5  12

Topmost element = 5
Do you want to insert another element ? (y/Y)y

Input data of newnode : 6


You have created the following stack :    6   5  12

Topmost element = 6
Do you want to insert another element ? (y/Y)n
		-------------------------------------



Deletion of element from stack :
		-----------------------------------

Topmost element = 6

Your stack after poping the TOP element (6):     5  12

Do you want to delete another element ? (y/Y)n
******************************************************/
