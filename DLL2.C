#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct dlist
{
  int data;
  struct dlist * next;
  struct dlist * prev;
} node ;
int position=0;
void create (node *h, node * e);
void print(node *h, node *e)  ;
void insert_beg(node *h);
void insert_end(node *e);
void insert_before_keynode (node *h, node *e);
void insert_after_keynode(node *h,node *e);
void insert_at_pos(node *h,int data,int pos);
void count_nodes(node *h,node *e);
void reverse(node *h,node *e);
node * search (node *h ,node *e,int key) ;
void delete (node *h, node *e) ;

void main()
{
  int c,data,pos,num;
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
    printf("\n\t1 to create the list");
    printf("\n\t2 to display the list");
    printf("\n\t3 to insert any extra node at the beginning ");
    printf("\n\t4 to insert any extra node at the end");
    printf("\n\t5 to insert before a keynode ");
    printf("\n\t6 to insert after a keynode");
    printf("\n\t7 to insert at position");
    printf("\n\t8 to delete any node");
    printf("\n\t9 to search any node");
    printf("\n\t10 to count the number of nodes in the list");
    printf("\n\t11 to reverse the list");
    printf("\nYour choice : ");
    scanf("%d",&c);
	  if(c==1)
	     create(head,end);
	  else if(c == 2)
	  {
	   /* DISPLAY THE LINKED LIST */
	     printf("\nThe linked list : ");
	     print(head,end);
	  }
	  else if (c == 3)
	  {
	   /* INSERT AT BEGINNING  */
	     insert_beg(head);
	  }
	  else if(c==4)
	  {
	  /* INSERT AT END  */
	     insert_end(end);
	  }
	  else if(c==5)
	  {
	     insert_before_keynode(head,end);
	  }
	  else if(c==6)
	  {
	     insert_after_keynode(head,end);
	  }
	  else if(c==7)
	  {
	     printf("\n\tenter the value of the new node :");
	     scanf("%d",&data);
	     printf("\n\t enter the position at which we want to insert the node");
	     scanf("%d",&pos);
	     insert_at_pos(head,data,pos);
	  }
	  else if(c==8)
	  {
	      delete(head,end);
	  }
	  else if(c==9)
	  {
	      printf("\n\t enter the node value to be searched :");
	      scanf("%d",&num);
	      p=search(head,end,num);
	      if(p!=NULL)
		  printf("\n\telement found at position %d ",position);
	      else
		  printf("\n\telement is not found in the list");
	      position=0;
	  }
	  else if(c==10)
	  {
	      count_nodes(head,end);
	  }
	  else if(c==11)
	  {
	      reverse(head,end);
	  }
	  else
	      printf("\n\tWrong choice");
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
void count_nodes(node *head,node *end)
{
   node *p;int count=0;
   p=head->next;
   while(p!=end)
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
void insert_beg(node * head)
{
    node *newnode, *n1;
    newnode = (node *) malloc (sizeof(node));
    printf("\nEnter value of the newnode : ");
    scanf("%d", &newnode -> data);

    n1 = head -> next;
    head -> next = newnode;
    newnode -> next = n1;
    n1 -> prev = newnode;
    newnode -> prev = head;
}



void insert_end(node * end)
{
    node *newnode, *n1;

    newnode = (node *) malloc (sizeof(node));
    printf("\nEnter value of the newnode : ");
    scanf("%d", &newnode -> data);
    n1 = end -> prev;
    n1 -> next = end;
    n1 -> next = newnode;
    newnode -> next = end;
    end -> prev = newnode;
    newnode -> prev = n1;
}
void insert_before_keynode(node * head, node * end)
{
    int key;
    node *keynode,*n2,*n1,*newnode;

    newnode = (node *) malloc (sizeof(node));
    printf("\nEnter value of the newnode : ");
    scanf("%d", &newnode -> data);
    printf("\nInput keynode : ");
    scanf("%d", &key) ;
    keynode = search (head,end,key);
    if(keynode == NULL)
    {
	printf("\nNode not found");
	return;
    }
    n2 = keynode;
    n1 = n2 -> prev;
    newnode -> prev = n1;
    newnode -> next = n2;
    n1 -> next = newnode;
    n2 -> prev = newnode;

}
void insert_after_keynode(node *head,node *end)
{
    node *newnode,*n2,*n1,*keynode;
    int key;

    newnode = (node *) malloc (sizeof(node));
    printf("\nEnter value of the newnode : ");
    scanf("%d", &newnode -> data);
    printf("\nInput keynode : ");
    scanf("%d", &key) ;
    keynode = search (head,end,key);
    if(keynode == NULL)
    {
	printf("\nNode not found");
	return;
    }

    n1 = keynode;
    n2 = n1 -> next;
    newnode -> prev = n1;
    newnode -> next = n2;
    n1 -> next = newnode;
    n2 -> prev = newnode;

 }

void insert_at_pos(node *head,int data,int pos)
{
	node *tmp,*p,*n1;
	int i;
	tmp= (node *) malloc (sizeof(node));
	tmp->data=data;
	if(pos==1)
	{

	    n1 = head -> next;
	    head -> next = tmp;
	    tmp -> next = n1;
	    n1 -> prev = tmp;
	    tmp -> prev = head;
	    return;
	}
	p=head->next;
	for(i=1; i<pos-1 && p!=NULL; i++)
	    p=p->next;
	if(p==NULL)
	    printf("There are less than %d elements\n",pos);
	else
	{
	    tmp->next=p->next;
	    p->next=tmp;
	}
	return;
}/*End of addatpos()*/

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
	    {
	       list=list->next;
	       position++;
	    }
	}
  }
}

void delete (node *head, node *end)
{
  node * keynode, * n1, * n2;
  int key;
  printf("\n\t enter the node to be deleted :");
  scanf("%d", &key);
  if(head->next==NULL)
	{
	    printf("\n\tList is empty.\n");
	    return;
	}
    n1=head->next;
    n2=n1->next;
	/*Deletion of first node*/
    if(n1->data==key)
    {
	    head->next=n2;
	    n2->prev=head;
	    free(n1);
	    return ;
    }

    keynode = search(head,end,key);
    if(keynode == NULL)
    {
	    printf("Node not found");
	    return ;
    }
    n1 = keynode -> prev;
    n2 = keynode -> next;
    // DELETION OF KEYNODE
    n1 -> next = n2;
    n2 -> prev = n1;
    free(keynode);

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