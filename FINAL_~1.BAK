/* 		C PROGRAM TO TMPLEMENT DOUBLY LINKED LIST  		*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct dlist
{
  int data;
  struct dlist * next;
  struct dlist * prev;
} node ;

void create (node *h, node * e);
void print(node *h, node *e)  ;
void insert (node *h, node *e);
void count_nodes(node *h);
void reverse(node *h,node *e);
node * search (node *h ,node *e,int key) ;
void del (node *h, node *e) ;

void main()
{
  int  c,item,cnt=0,pos=1;
  char resp;
  node *head, *end, *p;
  clrscr();
  head = (node *) malloc (sizeof(node));
  end = (node *) malloc (sizeof(node));

  printf("\n\tIMPLEMENTATION OF DOUBLY LINKED LIST\n");
  printf("\t------------------------------------\n");
  /*create(head,end);
  printf("\nYOUR LINKED LIST IS :");
  print(head,end);*/
  do
  {
    printf("\n\nPress");
    printf("\n\t0 to create the list");
    printf("\n\t1 to insert any extra node ");
    printf("\n\t2 to delete any node");
    printf("\n\t3 to search any node");
    printf("\n\t4 to count the number of nodes in the list");
    printf("\n\t5 to reverse the list");
    printf("\nYour choice : ");
    scanf("%d",&c);
	  if(c==0)
	  create(head,end);
    if(c == 1)
	  {
	   /* INSERTION IN LINKED LIST */
	    insert (head,end);
	    printf("\nThe linked list after insertion : ");
	    print(head,end);
	  }
	  else if (c == 2)
	  {
	   /* DELETION IN LINKED LIST */
	    del(head,end);
	    printf("\nThe linked list after deletion : ");
	    print(head,end);
	  }
	  else if(c==3)
	  {
	    printf("\n enter the element to be searched ");
	    scanf("%d",&item);
	    p=head->next;
	    cnt=0;pos=1;
	    while(p!=NULL)
	    {
		if(p->data==item)
		    {
		    printf("\n element found at position %d ",pos);
		    cnt++;
		    }
		pos++;
		p=p->next;
	    }

	    if(cnt==0)
		printf("\n element not found in the list");
	  }
	  else if(c==4)
	  {
	      count_nodes(head);
	  }
	  else if(c==5)
	  {
	     /*REVERSE THE LIST*/
	     reverse(head,end);
	  }
	  printf("\n\nWant to go back to the main menu : (y/Y)");
	  fflush(stdin);
	  resp = getchar();
	  } while (resp == 'y' || resp == 'Y') ;
}


void create (node * h, node * end)
{
  int i,num;
  node * newnode, * n;
  n = h;
  printf("\nEnter no of nodes to be inserted : ");
  scanf("%d", &num) ;
  for (i=0;i<num;i++)
  {
    newnode = (node *) malloc (sizeof(node));
    printf("Enter value of node %d : ", i+1);
    scanf("%d", &newnode -> data);
    newnode -> prev = n;
    n -> next = newnode;
    n = newnode;
  }
    n -> next = end;
    end -> prev = n;
}
void count_nodes(node *head)
{
   node *p;int count=0;
   p=head->next;
   while(p->next!=NULL)
   {
      count ++;
      p=p->next;
   }
   printf("\n the number of nodes is %d ",count);
}
void print(node * head, node * end)
{
  node *n;
  n = head -> next;
  while(n -> next != end)
  {
    printf("  %2d", n -> data);
    n = n -> next;
  }
  printf("  %2d", n -> data);
}

void insert (node * head, node * end)
{
  node *newnode, *keynode, *n1, *n2;
  int key, ans;
  printf("\nPress");
  printf("\n\t 1 to insert node at the beggining of the list") ;
  printf("\n\t 2 to insert node in the middle of the list");
  printf("\n\t 3 to insert node at the last of the list");
  printf("\nYour response : ");
  scanf("%d", &ans);
  newnode = (node *) malloc (sizeof(node));
  printf("\nEnter value of the newnode : ");
  scanf("%d", &newnode -> data);

  switch (ans)
  {
	case 1 :
		n1 = head -> next;
		head -> next = newnode;
		newnode -> next = n1;
		n1 -> prev = newnode;
		newnode -> prev = head;
		return;

	case 2 :
		printf("\nInput keynode : ");
		scanf("%d", &key) ;
		keynode = search (head,end,key);
		if(keynode == NULL)
		{
		  printf("\nNode not found");
		  return;
		}
		printf("\nPress");
		printf("\n\t1 to insert node before keynode");
		printf("\n\t2 to insert node after keynode");
		printf("\nYour answer : ");
		scanf("%d", &ans);
		if(ans == 1)
		 {
		   n2 = keynode;
		   n1 = n2 -> prev;
		 }
		else
		 {
		   n1 = keynode;
		   n2 = n1 -> next;
		 }
		newnode -> prev = n1;
		newnode -> next = n2;
		n1 -> next = newnode;
		n2 -> prev = newnode;
		return;

	case 3 :

		n1 = end -> prev;
		n1 -> next = end;

		n1 -> next = newnode;
		newnode -> next = end;
		end -> prev = newnode;
		newnode -> prev = n1;

		return;
  }
}

node * search (node * head , node * end, int key)
{
  node * list;
  list = head;
  while(1)
  {
	if(list->data == key)
	  return(list) ;
	else
	{
	  if(list->next == end)
	    return(NULL);
	  else
	  list=list->next;
	}
  }
}

void del (node *head, node *end)
{
  node * keynode, * n1, * n2;
  int key, ans;
  printf("\nPress");
  printf("\n\t1 to delete the first node");
  printf("\n\t2 to delete any interior node");
  printf("\n\t3 to delete the last node");
  printf("\nYour answer : ");
  scanf("%d", &ans);
  switch(ans)
  {
	case 1:
		n1 = head -> next;
		n2 = n1 -> next;

		// DELETION OF FIRST NODE
		head -> next = n2;
		n2 -> prev = head;
		free(n1);
		return;

	case 2: printf("Enter node to delete :");
		scanf("%d",&key);
		keynode = search(head,end,key);
		if(keynode == NULL)
		   printf("Node not found");
		else
		{
		  n1 = keynode -> prev;
		  n2 = keynode -> next;
		// DELETION OF KEYNODE
		  n1 -> next = n2;
		  n2 -> prev = n1;
		  free(keynode);
		}
		  return;


	case 3:
		n1 = end -> prev ;
		n2 = n1 -> prev ;

	// DELETION OF LAST NODE
		n2 -> next = end;
		end -> prev = n2;

		free(n1);
		return;
  }
}
void reverse(node *head,node *end)
{
    node *p;
    p=end->prev;
    while(p->prev!=head)
    {
	 printf(" %d ",p->data);
	 p=p->prev;
    }
    printf(" %d ",p->data);

}