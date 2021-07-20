/* ADDITION TWO POLYNOMIALS */

# include<stdio.h>
# include<conio.h>

/* Defination of straucture */
typedef struct node
{
  int coef;
  int expo;
  struct node *next;
}node;

struct node *head1,*head2; // Declared head pointres as GLOBAL

/* Function of getnode() */
struct node *getnode(int x, int y)
{
   node *p;
   p = (node*)malloc(sizeof(node));
   p->coef = x;
   p->expo = y;
   p->next = NULL;
   return p;
}

/* Function for create a polynomaial */
struct node *createpoly(node *head)
{
    node *ptr1,*ptr2;
    int coef,expo;
    printf("\nEnter the particulars of the polynomial:-");
    printf("\n\tEnter coefficient : ");
    scanf("%d",&coef);
    do
    {
       printf("\tEnter the exponent : ");
       scanf("%d",&expo);
       ptr1 = getnode(coef,expo);
       if (head == NULL)
	  head = ptr1;
       else
	  ptr2->next = ptr1;
       ptr2 = ptr1;
       printf("\n\tEnter the coefficient (-999 to STOP) : ");
       scanf("%d",&coef);
    }while(coef != -999);
    return head;
}

/* Function for display a polynomial */
void display_poly(node *head)
{
   node *ptr;
   ptr = head;
   if (head == NULL)
   {
       printf("\nNo polynomial found. Create a polynomial first.");
       getch();
       return;
   }
   printf("\n\tYour polynomial is :-  ");
   while (ptr->next != NULL)
   {
	 if(ptr->expo == 0)
	    printf(" %d +",ptr->coef);
	 else
	    printf(" %dx^%d + ",ptr->coef,ptr->expo);
	 ptr = ptr->next;
   }
   printf(" %dx^%d ",ptr->coef,ptr->expo);
}

/* Function for addition of two polynomial equation */
void sum_poly(node *head1,node *head2)
{
   node *ptr1,*ptr2,*sumpoly,*sumpoly_head;
   ptr1 = head1;
   ptr2 = head2;
   sumpoly = (node*)malloc(sizeof(node));
   sumpoly_head = sumpoly;
   while((ptr1 != NULL) && (ptr2 != NULL))
   {
      if ((ptr1->expo) == (ptr2->expo))
      {
	 sumpoly->coef = ptr1->coef + ptr2->coef;
	 sumpoly->expo = ptr1->expo;
	 ptr1 = ptr1->next;
	 ptr2 = ptr2->next;
      }
      else if((ptr1->expo) > (ptr2->expo))
      {
	 sumpoly->coef = ptr1->coef;
	 sumpoly->expo = ptr1->expo;
	 ptr1 = ptr1->next;
      }
      else
      {
	 sumpoly->coef = ptr2->coef;
	 sumpoly->expo = ptr2->expo;
	 ptr2 = ptr2->next;
      }
      sumpoly->next = (node *)malloc(sizeof(node));
      sumpoly = sumpoly->next;
   }
   while (ptr1 != NULL)
   {
      sumpoly->coef = ptr1->coef;
      sumpoly->expo = ptr1->expo;
      ptr1 = ptr1->next;
      sumpoly->next = (node*)malloc(sizeof(node));
      sumpoly = sumpoly->next;
   }
   while (ptr2 != NULL)
   {
      sumpoly->coef = ptr2->coef;
      sumpoly->expo = ptr2->expo;
      ptr2 = ptr2->next;
      sumpoly->next = (node*)malloc(sizeof(node));
      sumpoly = sumpoly->next;
   }
   sumpoly->next = NULL;
   printf("\nAfter addition polynomial is :-");
   sumpoly = sumpoly_head;
   while(sumpoly->next->next !=NULL)
   {
      if (sumpoly->expo == 0)
	   printf(" %d + ",sumpoly->coef);
      else
	   printf(" %d x^%d + ",sumpoly->coef,sumpoly->expo);
      sumpoly = sumpoly->next;
   }
   if(sumpoly->expo == 0)
      printf(" %d ",sumpoly->coef);
   else
      printf(" %d x^%d",sumpoly->coef,sumpoly->expo);
}

/* Main function */
void main()
{
   clrscr();
   printf("\n\t\tPROGRAM FOR POLYNOMIAL ADDITION\n");
   printf("\nEnter your 1st polynomial :-");
   head1 = createpoly(head1);
   display_poly(head1);
   printf("\nEnter your 2nd polynomial :-");
   head2 = createpoly(head2);
   display_poly(head2);
   sum_poly(head1,head2);
   getch();
}
/* ================== OUTPUT =============================>


		PROGRAM FOR POLYNOMIAL ADDITION

Enter your 1st polynomial :-
Enter the particulars of the polynomial:-
	Enter coefficient : 12
	Enter the exponent : 2

	Enter the coefficient (-999 to STOP) : 12
	Enter the exponent : 3

	Enter the coefficient (-999 to STOP) : 12
	Enter the exponent : 4

	Enter the coefficient (-999 to STOP) : -999

	Your polynomial is :-   12x^2 +  12x^3 +  12x^4
Enter your 2nd polynomial :-
Enter the particulars of the polynomial:-
	Enter coefficient : 13
	Enter the exponent : 2

	Enter the coefficient (-999 to STOP) : 13
	Enter the exponent : 3

	Enter the coefficient (-999 to STOP) : -999

	Your polynomial is :-   13x^2 +  13x^3
After addition polynomial is :- 25 x^2 + 25 x^3 + 12 x^4
*/


