/* IMPLEMENTATION OF QUEUE USING LINKED LIST  */

#include<stdio.h>
#include<conio.h>
/*Structure Definition*/
typedef struct node
{
   int data;
   struct node * next ;
} node;

static struct node * front = NULL, * rear = NULL;
int item;
/*Function Declaration*/
void insert(int n);
int del();


void main()
{
   int p,num; char option,ans='y';
   clrscr();
   printf("\n\t\tIMPLEMENTATION OF QUEUE USING LINKED LIST");
   printf("\n\t\t-----------------------------------");

   do
   {
		  printf("\nDo you want to insert(U) / delete(O) ?");
		  option=getche();
		  switch(option)
		  {
			case 'U':
			case 'u':
			  printf("\n\t\t\tEnter element to insert : ");
			  scanf("%d",&num);
			  insert(num);
			  break;
			case 'o':
			case 'O':
			  num=del();
			  if(num!=-9999)
				  printf("\n\t\t\tDeleted item : %d",num);
			  break;
			default:
			  printf("\n\nIncorrect option!!!");
			}
			printf("\nAnother operation?(Y/N)");
			ans=getche();
		}while((ans=='Y')||(ans=='y'));


 getch();
}

void insert(int n)//Function to insert element into the linked Queue
{
   struct node * newnode;
   newnode = (node *) malloc (sizeof (node));
   newnode->data=n;
   newnode->next=NULL;
   if(rear== NULL)
   {
       front=newnode;
       rear=newnode;
   }
   else
   {
       rear -> next= newnode;
       rear = newnode;
   }
}

int del()//Function to delete element from the linked Queue
{

   if(front == NULL)
   {
       printf("\n Queue is empty");
       return(-9999);
   }
   else
   {
       item = front->data;
       if(front == rear)
       {
	  front = NULL;
	  rear = NULL;
       }
       else
	  front=front -> next;
   }
   return(item);
}
/**********************OUTPUT***********************
		IMPLEMENTATION OF QUEUE USING LINKED LIST
		-----------------------------------
Do you want to insert(U) / delete(O) ?o
 Queue is empty
Another operation?(Y/N)y
Do you want to insert(U) / delete(O) ?u
			Enter element to insert : 90

Another operation?(Y/N)y
Do you want to insert(U) / delete(O) ?u
			Enter element to insert : 68

Another operation?(Y/N)y
Do you want to insert(U) / delete(O) ?o
			Deleted item : 90
Another operation?(Y/N)n

********************************************************/


