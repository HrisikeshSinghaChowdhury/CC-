#include<iostream.h>
#include<conio.h>
template <class t>
class node
{
    public:
    t data;
    node<t> *next;
    node<t> *prev;
    public:
    node<t>* createlist(node <t> *head);
    node<t>* del_beg(node <t> *head);
    void display(node <t> *head);
     //node<T>* getnode(T);
    //void reverse_display(node <t> * head);
};
template <class t>
node<t>* node<t>:: createlist( node <t> *head)
{
    node <t> *temp,*current,*ptr;
    ptr=head;
    int x=1,num;
    while(x==1)
    {
	cout<<"\nEnter data for the new node";
	temp=new node<t>;
	cin>>num;
	temp->data=num;
	temp->next=NULL;
	if(head==NULL)
	{
	    head=temp;
	    current=temp;
	}
	else
	{
	   // cout<<"Entered"<<"\n";
	    current->next=temp;
	    temp->prev=current;
	    current=temp;
	}
	cout<<"Enter 1 to continue otherwise 0 :\t";
	cin>>x;
    }
    return (head);
}
template <class t>
node<t>* node<t>:: del_beg( node <t> *head)
{
     node<t> *ptr,*ptr2;
     ptr=ptr2=head;
     ptr=ptr->next;
     delete ptr2;
     head=ptr;
     return (head);
}
template <class t>
void node <t> ::display(node <t> *head)
{
     node <t> *ptr;
     ptr=head;
     while(ptr!=NULL)
     {
	 cout<<ptr->data<<",";
	 ptr=ptr->next;
     }
}
void main()
{
    clrscr();
    node <int> ob,*head;
    head=NULL;
    head=ob.createlist(head);
    //cout<<head->data;
    ob.display(head);
    head=ob.del_beg(head);
    cout<<"\n";
    ob.display(head);
    getch();
}