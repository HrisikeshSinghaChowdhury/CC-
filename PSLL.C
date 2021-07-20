#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct dll
{
     int info;
     struct dll *next;
     struct dll *prev;
} node;
 void createlist(node *h, node *e);
 void display( node *h, node *e);
void main()
{
	 node *head,*end;
	 head=( node*)malloc(sizeof( node));
	 end=( node*)malloc(sizeof( node));
	 head->next=NULL;
	 end->prev=NULL;
	 clrscr();
	 createlist(head,end);
	 display(head,end);
	 getch();
}

void createlist(node *h,node *e)
{
     node *n1,*temp,*newnode;
    int i=1,n;
    n1=h;
    temp=e;
    printf("\n Enter no. of nodes to be inserted :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 newnode=(node*)malloc(sizeof( node));
	 printf("\n Enter the node value :");
	 scanf("%d",&newnode->info);
	 newnode->prev=n1;
	 n1->next=newnode;
	 n1=newnode;
    }
    n1->next=temp;
    temp->prev=n1;
}
void display( node *h, node *e)
{
    node *n,*t;
    n=h->next;
    t=e;
    printf("\nForward traverse\n");
    while(n->next!=t)
    {
	   printf(" %2d<->",n->info);
	   n=n->next;
    }
    printf("%2d",n->info);
    t=e->prev;
    printf("\n Backward traverse \n");
    while(t->prev!=h)
    {
	   printf(" %2d<->",t->info);
	   t=t->prev;
    }
    printf("%2d",t->info);

    return;
}