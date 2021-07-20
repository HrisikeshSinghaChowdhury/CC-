/* ARRAY IMPLEMENTATION OF STACK */

#include<stdio.h>
#include<conio.h>

static int stack[10], top = -1,response=0;
void push();
int pop();

void main()
{
   int i,n, p; char ch;
   clrscr();
   printf("\n\t\tIMPLEMENTATION OF STACK USING ARRAY");
   printf("\n\t\t-----------------------------------");
   printf("\n\nCreation of stack : \n");

   do
   {
   push();
   if(response==0)
   {
   printf("\n\nYou have created the following stack : ");
   for(i=0;i< top+1;i++)
      printf("%4d", stack[i]);
   printf("\n\nTopmost element is : %d", stack[top]);

   printf("\nDo you want to insert another element ? (y/Y)");
   ch = getche();
   }
   else
       ch='n';
   }
   while(ch == 'y' || ch == 'Y');
   printf("\n\t\t-------------------------------------");
   printf("\n\n\n\nDeletion of element from stack : ");
   printf("\n\t\t-----------------------------------");


   do
   {
       p=pop();
       if(p!=-999)
       {
       printf("\nThe TOP element now is %d :",p);
       printf("\n\nYour stack after poping the TOP element (%d):  ",p);
       for(i=0;i < top+1;i++)
	  printf("%4d", stack[i]);
     printf("\n\nDo you want to delete another element ? (y/Y)");
     ch = getche();
       }
       else
	  ch='n';
   }
   while(ch == 'y' || ch == 'Y');
  getch();
}


void push()
{
  int n;
  top ++;
  if(top >= 10)
  {
     printf("\n\t\t\t:Stack Overflow");
     response++;
     top=top-1;
     return;
  }
  printf("\n\nEnter element to push: ");
  scanf("%d", &n);
  stack[top] = n;
}

int pop()
{
  int p;
  if (top == -1)
  {
    printf("\n\t\t\t\t\t   :stack underflow");
    return(-999);
  }
  p = stack[top];
  top--;
  return(p);
}