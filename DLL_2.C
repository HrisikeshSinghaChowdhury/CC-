/*  Program of double linked list*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
	struct node *prev;
};
struct node *start;struct node *end;
void create_list(struct node *start,struct node *end);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start,int data);
void addatbeg(struct node *start,struct node *end,int data);
void addatend(struct node *start,struct node *end,int data);
struct node *addafter(struct node *start,int data,int item);
struct node *addbefore(struct node *start,int data,int item );
struct node *addatpos(struct node *start,int data,int pos);
struct node *del(struct node *start,int data);
struct node *reverse(struct node *start);
struct node *sort_ascending(struct node *start);
main()
{
	struct node *start=NULL,*end=NULL;
	int choice,data,item,pos;

	while(1)
	{
		printf("1.Create List\n");
		printf("2.Display\n");
		printf("3.Count\n");
		printf("4.Search\n");
		printf("5.Add to empty list / Add at beginning\n");
		printf("6.Add at end\n");
		printf("7.Add after node\n");
		printf("8.Add before node\n");
		printf("9.Add at position\n");
		printf("10.Delete\n");
		printf("11.Reverse\n");
		printf("12.Sort ascending\n\n");
		printf("13.Quit\n\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		 case 1:
			create_list(start,end);
			break;
		 case 2:
			display(start);
			break;
		 case 3:
			count(start);
			break;
		 case 4:
			printf("Enter the element to be searched : ");
			scanf("%d",&data);
			search(start,data);
			break;
		 case 5:
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			addatbeg(start,end,data);
			break;
		 case 6:
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			addatend(start,end,data);
			break;
		 case 7:
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("Enter the element after which to insert : ");
			scanf("%d",&item);
			start=addafter(start,data,item);
			break;
		 case 8:
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("Enter the element before which to insert : ");
			scanf("%d",&item);
			start=addbefore(start,data,item);
			break;
		 case 9:
			printf("Enter the element to be inserted : ");
			scanf("%d",&data);
			printf("Enter the position at which to insert : ");
			scanf("%d",&pos);
			start=addatpos(start,data,pos);
			break;
		 case 10:
			printf("Enter the element to be deleted : ");
			scanf("%d",&data);
			start=del(start, data);
			break;
		 case 11:
			start=reverse(start);
			break;
		 case 12:
			start=sort_ascending(start);
			break;
		 case 13:
			 exit(1);
		 default:
			 printf("Wrong choice\n");
		}/*End of switch */
	}/*End of while */
}/*End of main()*/

void create_list(struct node *start,struct node *end)
{
	int i,n,data;
	printf("Enter the number of nodes : ");
	scanf("%d",&n);
	start=NULL;
	end=NULL;
	if(n==0)
	{
		start=start;
		end=end;
	}

	printf("Enter the element to be inserted : ");
	scanf("%d",&data);
	addatbeg(start,end,data);
	for(i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted : ");
		scanf("%d",&data);
		addatend(start,end,data);
	}

}/*End of create_list()*/

void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	p=start;
	printf("List is :\n");
	while(p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}/*End of display() */

void count(struct node *start)
{
	struct node *p;
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
	printf("Number of elements are %d\n",cnt);
}/*End of count() */

void search(struct node *start,int item)
{
	struct node *p=start;
	int pos=1;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			printf("Item %d found at position %d\n",item,pos);
			return;
		}
		p=p->link;
		pos++;
	}
	printf("Item %d not found in list\n",item);
}/*End of search()*/

void addatbeg(struct node *start,struct node *end,int data)
{
	struct node *tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	tmp->link=start;
	start->prev=tmp;
	start=tmp;
	end->prev=tmp;
	end->link=NULL;
	tmp->prev=NULL;
}/*End of addatbeg()*/

void addatend(struct node *start,struct node *end,int data)
{
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	end->link=tmp;
	tmp->prev=end;
	end=tmp;
	tmp->link=NULL;
}/*End of addatend()*/

struct node *addafter(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("%d not present in the list\n",item);
	return start;
}/*End of addafter()*/

struct node *addbefore(struct node *start,int data,int item)
{
	struct node *tmp,*p;
	if(start==NULL )
	{
		printf("List is empty\n");
		return start;
	}
	/*If data to be inserted before first node*/
	if(item==start->info)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==item)
		{
			tmp=(struct node *)malloc(sizeof(struct node));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("%d not present in the list\n",item);
	return start;
}/*End of addbefore()*/

struct node *addatpos(struct node *start,int data,int pos)
{
	struct node *tmp,*p;
	int i;
	tmp=(struct node *)malloc(sizeof(struct node));
	tmp->info=data;
	if(pos==1)
	{
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	for(i=1; i<pos-1 && p!=NULL; i++)
		p=p->link;
	if(p==NULL)
		printf("There are less than %d elements\n",pos);
	else
	{
		tmp->link=p->link;
		p->link=tmp;
	}
	return start;
}/*End of addatpos()*/

struct node *del(struct node *start,int data)
{
	struct node *tmp,*p;
	if(start==NULL)
	{
		printf("List is empty\n");
		return start;
	}
	/*Deletion of first node*/
	if(start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	/*Deletion in between or at the end*/
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
		p=p->link;
	}
	printf("Element %d not found\n",data);
	return start;
}/*End of del()*/

struct node *reverse(struct node *start)
{
	struct node *prev, *ptr, *next;
	prev=NULL;
	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	return start;
}/*End of reverse()*/
struct node *sort_ascending(struct node *start)
{
       struct node *p,*p2;
       int temp;
       p=start;
       p2=start;
       while(p2->link!=NULL)
       {
	       p=p2->link;
	       while(p!=NULL)
	       {

		      if((p2->info)>(p->info))
		      {
			    temp=p2->info;
			    p2->info=p->info;
			    p->info=temp;
		      }
	       p=p->link;
	       }
	       p2=p2->link;
       }
       return start;
}