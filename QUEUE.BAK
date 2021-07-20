/*ARRAY IMPLEMENTATION OF QUEUE */

#include<stdio.h>
#include<conio.h>
/*Declarations of static variables*/
static int queue[10], front=-1, rear=-1,response=0;

/*Function declarations*/
void insert(int item);//User defined function to insert elements into the queue
int del();//User defined function to delete elements from the queue

void main()
{
   /*Declarations of variables*/
   int i,num; char option,ans='y';
   clrscr();
   printf("\n\t\tIMPLEMENTATION OF QUEUE USING ARRAY");
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


void insert(int n)//Function definition of insert()
{
   if(rear >= 9)//If the queue overflows
   {
	printf("\n\t\t\t:Queue Overflow");
	return;
   }
   if(front==-1)
   {
       front=0;
       rear=0;
   }
   else
   {
       rear++;
   }
   queue[rear] = n;
}

int del()//Function definition of del()
{
    int p;
    if (front == -1)//If the queue underflows
    {
	printf("\n\t\t\t\t\t   :queue  underflow");
	return(-9999);
    }
    if(front==rear)
    {
	p = queue[front];
	front=-1;
	rear=-1;
    }
    else
    {
	p= queue[front];
	front=front+1;
    }
    return(p);//Return the value that is deleted

}
/********************OUTPUT***********************
	 IMPLEMENTATION OF QUEUE USING ARRAY
	 ------------------------------------

                IMPLEMENTATION OF QUEUE USING ARRAY                             
                -----------------------------------                             
Do you want to insert(U) / delete(O) ?u                                         
                        Enter element to insert : 14                            
                                                                                
Another operation?(Y/N)y                                                        
Do you want to insert(U) / delete(O) ?7                                         
                                                                                
Incorrect option!!!                                                             
Another operation?(Y/N)y
Do you want to insert(U) / delete(O) ?u                                         
                        Enter element to insert : 7                             
                                                                                
Another operation?(Y/N)y                                                        
Do you want to insert(U) / delete(O) ?o                                         
                        Deleted item : 14                                       
Another operation?(Y/N)n
***************************************************/