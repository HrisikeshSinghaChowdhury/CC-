#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
class node
{
	public:
	int data;
	node *next;
	node *prev;
	void getdata()
	{
	      cout<<"Enter any number"<<endl;
	      cin>>data;
	}
	void show()
	{
	      cout<<data<<",";
	}
};

int position=0;
void main()
{
  int c,data,pos,num,found=0;
  char resp;
  node *head, *end, *p,  *h,  *e;
  clrscr();
  head = new node();
  end =  new node();
  head=NULL;
  e=NULL;
  h=NULL;
  end=NULL;
  printf("\n\tIMPLEMENTATION OF DOUBLY LINKED LIST\n");
  printf("\t------------------------------------\n");

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
	   /* Create the nodes */
	  {	int i,num;
		node * newnode, * n;
		n = h;
		cout<<"\nEnter no of nodes to be inserted : ";
		cin>>num;
		for (i=1;i<=num;i++)
		{

		       newnode=new node();
		       if(n==NULL)
		       {
			    n=newnode;
			    h=n;
			    newnode->getdata();
			    newnode->prev=NULL;
		       }
		       else
		       {
			    newnode->getdata();
			    newnode -> prev = n;
			    n -> next = newnode;
			    n = newnode;
		       }
		  }
		n -> next = NULL;
		end = n;
	  }
	  else if(c == 2)
	  {
	   /* Display the nodes */
	     cout<<"\nThe linked list : ";
	     node *n;
	     n = h;
	     if(n==NULL)
	     {
		     cout<<"\n\tthe list is empty ";
	     }
	     while(n!= NULL)
	     {
		     n->show();
		     n = n -> next;
	     }
	   //  printf("  %2d", n -> data);

	  }
	  else if (c == 3)
	  {
	   /* Insert at beginning */
	     node *newnode, *n1;
	     newnode = new node();
	     newnode->getdata();
	     n1 = h;
	    if(n1 == NULL)
	    {
		 h=newnode;
		 newnode->prev=h;
		 newnode->next=end;
		 end->prev=newnode;
	    }
	    else
	    {
		h = newnode;
		newnode -> next = n1;
		n1 -> prev = newnode;
		newnode -> prev = h;
	    }
	  }
	  else if(c==4)
	  {
	  /* Insert at end  */
	      node *newnode, *n1;

	      newnode = new node();
	      newnode->getdata();
	      n1 = h;
	      if(n1 == NULL)
	      {
		 h=newnode;
		 newnode->prev=h;
		 newnode->next=end;
		 end->prev=newnode;
	      }
	      else
	      {
		 n1 = end;
		 n1 -> next = newnode;
		 newnode -> next = NULL;
		 end = newnode;
	      }
	      newnode -> prev = n1;
	  }
	  else if(c==5)
	  {
	  /* Insert before a keynode */
	       int key;
	       node *keynode,*n2,*n1,*newnode,*n3;
	       if(h==NULL)
	       {
		   cout<<"\n the list is empty.Create list first then insertion is possible \n";

	       }
	       else
	       {
		  newnode = new node();
		  newnode->getdata();
		  cout<<"\nInput keynode : ";
		  cin>>key;
		  found=0;
		  node * list;
		  list = h;
		  while(list!=NULL)
		  {
			 if(list->data == key)
			 {
			       found=0;
			       keynode=list;
			       break;
			 }
			 else
			 {

				  found++;
			  }
			  list=list->next;

		   }
		   keynode->show();

		    if(found>0)
		    {
			  printf("\nNode not found");
		    }
		    else
		    {

			n1=keynode->prev;
			newnode->next=keynode;
			keynode->prev=newnode;
			newnode->prev=n1;
			if(n1==NULL)
			{
			   h=newnode;
			   newnode->prev=NULL;
			}
			else
			n1->next=newnode;

		    }
	       }
	  }
	  else if(c==6)
	  {
	  /* Insert after a node*/
		int key;
		node *keynode,*n2,*n1,*newnode;
		if(h==NULL)
		{
		   cout<<"\n the list is empty.Create list first then insertion is possible \n";

		}
		else
		{
		  newnode = new node();
		  position=0;
		  newnode->getdata();
		  cout<<"\nInput keynode : ";
		  cin>>key;
		  found=0;
		  node * list;
		  list = h;
		  while(list!=NULL)
		  {
			 if(list->data == key)
			 {
			       found=0;
			       keynode=list;
			       break;
			 }
			 else
			 {
			      found++;
			 }
			 list=list->next;
		     }
		    if(found>0)
		    {
			  cout<<"\nNode not found";
		    }
		    else
		    {
		       n1 = keynode;
		       n2 = n1 -> next;
		       newnode -> prev = n1;
		       newnode -> next = n2;
		       n1 -> next = newnode;
		       n2 -> prev = newnode;
		     }
		}
	  }
	  else if(c==7)
	  {
	  /* Insert at given position */
	     cout<<"\n\tenter the value of the new node :";
	     cin>>data;
	     cout<<"\n\t enter the position at which we want to insert the node";
	     cin>>pos;
	     node *tmp,*p,*n1;
	     int i;
	    if(h==NULL)
	    {
	      cout<<"\n the list is empty.Create list first then insertion is possible \n";

	    }
	    else
	    {
	      tmp= new node();
	      tmp->data=data;
	      if(pos==1)
	      {

		   n1 = h;
		   h = tmp;
		   tmp -> next = n1;
		   n1 -> prev = tmp;
		   tmp -> prev = NULL;
	      }
	      else
	      {
		    p=h;
		    for(i=1; i<pos-1 && p!=NULL; i++)
		    p=p->next;
		    if(p==NULL)
			cout<<"There are less than %d elements\t"<<pos;
		    else
		    {
			tmp->next=p->next;
			p->next=tmp;
		     }

	       }
	    }
	  }
	  else if(c==8)
	  {
	  /* Delete a node */
	      node * keynode, * n1, * n2;
	      int key;
	       found=0;
	      cout<<"\n\t enter the node to be deleted :";
	      cin>>key;
	      if(h==NULL)
	      {
		  cout<<"\n\tList is empty.\n";
	      }
	      else
	      {
		  n1=h;
		  n2=n1->next;
	/*Deletion of first node*/
		 if(n1->data==key)
		 {
		      h=n2;
		      n2->prev=NULL;
		      delete n1;
		 }
		 else
		 {


		  node * list;
		  list = h;
		  while(list!=NULL)
		  {
			 if(list->data == key)
			 {
			       found=0;
			       keynode=list;
			       break;
			 }
			 else
			 {
			     found++;

			 }
			 list=list->next;
		     }
		    if(found>0)
		    {
			  cout<<"\nNode not found";
		    }
		    else
		    {
			 n1 = keynode -> prev;
			 n2 = keynode -> next;
		       //Deletion of keynode
			 n1 -> next = n2;
			 n2 -> prev = n1;
			 delete keynode;

		    }
		  }
		  }
	}
	  else if(c==9)
	  {
	  /* Search for a node */

	      if(h == NULL)
		   cout<<"\n\tthe list is empty.Create list first. ";
	      else
	      {
		   cout<<"\n\t enter the node value to be searched :";
		   cin>>num;
		    found=0;
		  node * list;
		  list = h;
		  while(list!=NULL)
		  {
			 if(list->data == num)
			 {
			       found=0;
			       break;
			 }
			 else
			 {

			      found++;
			      position++;
			 }
			  list=list->next;
		     }

		  if(found==0)
			cout<<"\n\telement found at position "<<position;
		  else
			cout<<"\n\telement is not found in the list";
		  position=0;
	      }
	   }
	  else if(c==10)
	  {
	  /* Count the number of nodes in the list */
		node *p;int count=0;
		p=h;
		if(p == NULL)
		{
		      cout<<"\n list is empty .the number of nodes is"<<count;
		}
		else
		{

		     while(p!=NULL)
		     {
			  count ++;
			  p=p->next;
		     }
		     cout<<"\n the number of nodes is  "<<count;
		}
	  }
	  else if(c==11)
	  {
	  /* Reverse the lisT */
	      node *p;
	      p=end;
	      while(p!=h)
	      {
		     p->show();
		     p=p->prev;
	      }
	      p->show();
	   }
	  else
	      printf("\n\tWrong choice");
	  printf("\n\nWant to go back to the main menu : (y/Y)");
	  fflush(stdin);
	  resp = getchar();
	  } while (resp == 'y' || resp == 'Y') ;
}
