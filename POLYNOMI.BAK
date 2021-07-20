#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 struct sll
 {
   int coeff;int index;
   struct sll *link;
 };
 static int response=0;
 void append(int a,int b,int c,struct sll *x);
void createlist(struct sll *ptr)
{

 char ch='Y';
 int i,a;
 struct sll*temp;
 temp=ptr;
 i=1;
 clrscr();
  printf("\n enter the coefficient for node number %d.  :",i);
  scanf("%d",&temp->coeff);
  printf("\n enter the index(in decreasing order) for node number %d.  :",i);
  scanf("%d",&temp->index);
  a=temp->index;
  temp->link=NULL;
  i++;
  printf("\n do you want to contune?press y/Y to continue otherwise n/N   :");
  fflush(stdin);
  scanf("%c",&ch);
  while(ch=='Y'||ch=='y')
  {
    temp->link=(struct sll*)malloc(sizeof(struct sll));
    if(temp->link==NULL)
    {
	printf("\n memory unavailabe.");
	return;
    }
    temp=temp->link;
    printf("\n enter the coefficient for node number %d.  :",i);
    scanf("%d",&temp->coeff);
    printf("\n enter the index(in decreasing oder) for node number %d.  :",i);
    scanf("%d",&temp->index);
    if(a<(temp->index))
    {
       printf("\n Wrong index.Index number must be in descending order.Exit the program");
       getch();
       return;
    }
    else
    {
       a=temp->index;
    }
    temp->link=NULL;
    i++;
    fflush(stdin);
    printf("\n do you want to continue?press y/Y to continue otherwise n/N  :");
    scanf("%c",&ch);
  }
}

  void display(struct sll*ptr)
 {
  struct sll*temp;
  temp=ptr;
  if(temp==NULL)
  {
     printf("\n the list is empty ");
     return;
  }
  else
  {
     while(temp!=NULL)
     {
	 if(temp->index==0)
	     printf("\t%d",temp->coeff);
	 else
	     printf("%d^x%d  ",temp->coeff,temp->index);
	 temp=temp->link;
     }
   }
 }
 void add_poly(struct sll*ptr1,struct sll*ptr2)
 {
 //int y=0;
 struct sll*temp;
 struct sll*node1;
 struct sll*node2;
 struct sll*q;

 node1=ptr1;
 node2= ptr2;
 temp=(struct sll*)malloc(sizeof(struct sll));
 q=temp;
   while(node1 != NULL && node2 != NULL)
   {
     if(node1->index == node2->index)
     {

	append(node1 ->coeff,node2->coeff,node2->index,temp);
	node1 = node1 -> link;
	node2 = node2 -> link;
     }
     else if(( node1 -> index) <( node2 -> index))
     {
	append(0,node2->coeff,node2->index,temp);
	node2 = node2 -> link;
     }
     else if((node1 ->index) >( node2 -> index))
     {
	append(node1 ->coeff,0,node1->index,temp);
	node1 = node1 -> link;
     }
     temp->link=(struct sll*)malloc(sizeof(struct sll));
     temp=temp->link;
     temp->link=NULL;
   }

   while( node1 != NULL)
   {
      append(node1 ->coeff,0,node1->index,temp);

      temp->link=(struct sll*)malloc(sizeof(struct sll));
      temp=temp->link;
      temp->link=NULL;
      node1 = node1 -> link;
   }

   while(node2 != NULL)
   {
      append(0,node2->coeff,node2 -> index,temp);
     temp->link=(struct sll*)malloc(sizeof(struct sll));
     temp=temp->link;
     temp->link=NULL;
     node2=node2->link;
   }
  printf("\n the resultant polynomial is :");
  while(q->link!=NULL)
  {
    if(q->index==0)
       printf("\t%d",q->coeff);
   else
       printf("%d^x%d  ",q->coeff,q->index);
   q=q->link;

   }
 }
 void append(int coeff1,int coeff2,int index,struct sll*temp2)
 {
  struct sll*new;
  new=temp2;
  new -> coeff =coeff1+coeff2 ;
  new -> index = index ;
 }


 void main()
{
 struct sll*head;
 struct sll*head2;
 head=(struct sll*)malloc(sizeof(struct sll));

 createlist(head);
 fflush(stdin);
 head2=(struct sll*)malloc(sizeof(struct sll));
 createlist(head2);
 printf("\n the polynomial(P1)is :");
 display(head);
 printf("\n the polynomial(P2) is :");
 display(head2);
 add_poly(head,head2);
 getch();
 }
