#include<iostream.h>
#include<conio.h>
template <class t>
class node
{
    public:
    t data;
    static int count;
    node<t> *next;
    public:
    node<t>* createlist(node <t> *head);
    node<t>* del_beg(node <t> *head);
    void display(node <t> *head1,node <t> *head2);
     //node<T>* getnode(T);
    //void reverse_display(node <t> * head);
};
template <class t>
int node<t> :: count=0;
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
	//temp->next=NULL;
	if(head==NULL)
	{
	    head=temp;
	    current=temp;
	}
	else
	{
	   // cout<<"Entered"<<"\n";
	    current->next=temp;
	    current=temp;
	}
	current->next=head;
	count++;
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
     count--;
     return (head);
}
template <class t>
void node <t> ::display(node <t> *h1,node <t> *h2)
{
     node <t> *ptr;
     int c=1;
     while(c<=count)
     {
	 cout<<ptr->data<<",";
	 ptr=ptr->next;
	 c++;
     }
}
     /*
     ptr=h1;
     do
     {
	 cout<<ptr->data<<",";
	 ptr=ptr->next;
     }while(ptr!=h2);*/

void main()
{
    clrscr();
    node <int> ob,*head1,*head2;
    head1=NULL;
    head2=NULL;
    head1=ob.createlist(head1);
    //cout<<head->data;
    head2=head1;
    ob.display(head1,head2);
    head1=ob.del_beg(head1);
    //cout<<head->data;
    cout<<"\n";
    ob.display(head1,head2);
    getch();
}