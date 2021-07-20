/*QUEUE USING LINKED LIST*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class queue
{

	public:
	int data;
	queue *next;
	void traverse(queue *f1);
	int pop(queue *s);
	void push(int val);

 };

	void queue :: push(int val)
	{
		data=val;


	}
	void queue :: traverse(queue *f1)
	{
		queue *k;
		k=f1;
		if(k==NULL)
		    cout<<"Queue is empty";
		else
		{
			for(k=f1;k!=NULL;k=k->next)
			{
				 cout<<k->data<<",";
			}
		}
	}
	int queue :: pop(queue *s)
	{
		int num;
		num=s->data;
		return(num);
	}

void main()
{
	queue *temp,*current,*start,*front,*rear,*s2,*p2;
	start=NULL;
	front=NULL;
	int ch,val,n;
	clrscr();
	 while(1)
	 {
		//clrscr();
		cout<<"\n\t1.Insert\n\t2.Delete\n\t3.Display\n\t4.Exit\n\tEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			 case 1:
			 temp=new queue();
			 cout<<"enter the value:";
			 cin>>val;
			 temp->push(val);
			 if(front==NULL)
			 {
				start=temp;
				current=temp;
				s2=temp;
				front=temp;

			 }
			 else
			 {
				     current->next=temp;
				     current=temp;

			 }
			  current->next=NULL;
			  rear=current;
			  break;

			 case 2:
				if(front==NULL)
				{
				     cout<<"queue is empty"<<endl;
				}
				else
				{
				     n=temp->pop(front);
				     cout<<"\n Deleted element is "<<n;
				     temp=front;
				     front=front->next;
				     delete temp;
				}
				break;
			 case 3:
			 temp->traverse(front);
			 break;

			 case 4:
			 exit(0);
			 break;

			 default:
			 cout<<"\n\tWrong choice,try again";
			 getch();
		}
	 }
}
