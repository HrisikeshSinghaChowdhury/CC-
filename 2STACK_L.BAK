/*STACK USING LINKED LIST*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class stack
{

	public:
	int data;
	stack *next;
	void traverse(stack *start);
	int pop(stack *s);
	void push(int val);


};
	void stack :: push(int val)
	{
		data=val;


	}
	void stack :: traverse(stack *s3)
	{
		stack *k;
		k=s3;
		if(k==NULL)
		    cout<<"Stack is empty";
		else
		{
			for(k=s3;k!=NULL;k=k->next)
			{
				 cout<<k->data<<",";
			}
		}
	}
	int stack :: pop(stack *s)
	{
		int num;
		stack *p;
		p=s;
		while(p!=NULL)
		{
		   num=p->data;
		   p=p->next;
		}
		return(num);

	}
void main()
{
	stack *temp,*current,*start,*s2,*p2,*p3,*t3,*t4;
	stack ob;
	start=NULL;
	s2=NULL;
	int ch,val,n;
	clrscr();
	 while(1)
	 {
		//clrscr();
		cout<<"\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n\tEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			 case 1:
			 temp=new stack();
			 cout<<"enter the value:";
			 cin>>val;
			 temp->push(val);
			 if(start==NULL)
			 {
				start=temp;
				current=temp;
				s2=temp;
			 }
			 else
			 {
				     current->next=temp;
				     current=temp;

			 }
			  current->next=NULL;
			  break;

			 case 2:
			 if(s2==NULL)
			 {
				cout<<"Stack underflows"<<endl;
			 }
			 else
			 {
			       n=temp->pop(s2);
			       cout<<"\n Deleted element is "<<n;
			       if(s2->next==NULL||((current->next==NULL)&&(s2==current)))
			       {
					if(s2->next==NULL)
					t4=s2;
					else
					t4=current;
					delete t4;
					//
					//cout<<"Stack is empty";
					s2=NULL;
					start=NULL;
			       }
			       else
			       {
					p3=s2;
					while(p3->next!=NULL)
					{
						t3=p3;
						p3=p3->next;
					}
					t3->next=NULL;
					current=t3;
					delete p3;
			       }

			 }
			 break;

			 case 3:
			 temp->traverse(s2);
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
