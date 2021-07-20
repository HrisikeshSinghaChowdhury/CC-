/* IMPLEMENTATION OF STACK USING LINKED LIST  */

#include<stdio.h>
#include<conio.h>

typedef struct node
{
   int data;
   struct node * next ;
} node;

static struct node * top = NULL;
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
	    printf("\nThe TOP element now is %d :");
	    top_element();
	    p=pop();//function call and p holds the value which is popped
	    printf("\n\nYour stack after poping the TOP element (%d):  ",p);
	    print();//Print the stack

	    printf("\n\nDo you want to delete another element ? (y/Y)");
	    ch = getche();
    }
    while(ch == 'y' || ch == 'Y');


 getch();
}

void push()
{
  struct node * newnode;
  newnode = (node *) malloc (sizeof (node));
  printf("\n\nInput data of newnode : ");
  scanf("%d", &newnode -> data);
  newnode -> next = top;
  top = newnode;
}

int pop()
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

void print()
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
   //  printf("\n\nTopmost element = %d",top -> data);
   }

}
void top_element()
{
   if(top == NULL)
       printf("\n [Stack is empty.No top element exists.]");
   else
       printf("\n\nTopmost element = %d",top -> data);
}