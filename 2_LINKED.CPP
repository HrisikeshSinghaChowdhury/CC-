#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
class stack
{
	public:
	int data;
	stack *link;
	static stack *top;
	void push(int item);
	int pop()
	{
		int x=-9999;
		if(top==NULL)
		{
			printf("\nStack Empty");
			return(x);
		}
		x=top->data;
		top=top->link;
		return(x);
	}

};




void stack :: push(int item)
{
	stack *newnode;
	newnode=new stack();
	newnode->data=item;
	newnode->link=top;
	top=newnode;
}

void main()
{
	 stack *s,*top;
	 char option,ans;
	 int num;
	 top=NULL;
	 clrscr();
	 do
	 {
		  cout<<"\nDo you want to push(U) / pop(O) ?";
		  option=getche();
		  switch(option)
		  {
			case 'U':
			case 'u':
			  cout<<"\n\t\t\tEnter element to push : ";
			  cin>>num;
			  s->push(num);
			  break;
			case 'o':
			case 'O':
			  num=s->pop();
			  if(num!=-9999)
				  cout<<"\n\t\t\tPopped item :"<<num;
			  break;
			default:
			  cout<<"\n\nIncorrect option!!!";
			}
			cout<<"\nAnother operation?(Y/N)";
			ans=getche();
		}while((ans=='Y')||(ans=='y'));
}