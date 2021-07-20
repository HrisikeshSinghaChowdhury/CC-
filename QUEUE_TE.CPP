#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
template <class T>
class queue
	  {
	   private:
	    int a[max];
	    int rear;
	    int front;
	   public:
	    queue(){rear=front=-1;}
	    void add()
	     {
	      if(rear<max-1)
	       {
		cout<<endl<<endl<<" Enter the element to ADD: ";
		int ele;
		cin>>ele;
		rear++;
		a[rear]=ele;
		cout<<endl<<endl<<" ADD Successful....";
	       }
	      else
		cout<<endl<<endl<<"QUEUE is overflow!!!!";
	      getch();
	     }
	    void del()
	     {
	      if(front!=rear)
	       {
		front++;
		cout<<endl<<endl<<" DELETED element is: "<<a[front];
	       }
	      else
	       cout<<endl<<endl<<"QUEUE is empty!!!";
	      getch();
	     }
	    void toq()
	     {
	      if(rear!=front)
	       {
		cout<<endl<<endl<<" FRONT-OF-QUEUE element is: "<<a[front+1];
	       }
	      else
	       cout<<endl<<endl<<"QUEUE is empty!!!";
	      getch();
	     }
	     void display()
	     {
		int p;
		if(rear==-1)
		{
		    cout<<"Queue is empty";
		 }
		 else

		 {
		    if(front==-1)
		    p=0;
		    else
		    p=front+1;
		    for(int i=p;i<=rear;i++)
		     cout<<a[i]<<",";
		 }
		 getch();
	     }
	  };
void main(void)
{
 queue <int>l;
 int ch,flag=0;
 clrscr();
 do
  {
   do
    {
     flag=0;
     clrscr();
     cout<<endl<<"    ****\t\tMENU\t\t****";
     cout<<endl<<endl<<" ADD ELEMENT    \t\t-->PRESS 1.";
     cout<<endl<<endl<<" DELETE ELEMENT \t\t-->PRESS 2.";
     cout<<endl<<endl<<" FRONT-OF-QUEUE \t\t-->PRESS 3.";
     cout<<endl<<endl<<" DISPLAY\t-->PRESS 4.";
     cout<<endl<<endl<<" EXIT \t\t\t        -->PRESS 5.";
     cout<<endl<<endl<<" Now enter your choice: ";
     cin>>ch;
     if(ch<1||ch>5)
      {
       cout<<endl<<" wrong choice entered...!!!! Try again...";
       getch();
       flag=1;
      }
    }while(flag);
   clrscr();
   switch(ch)
    {
     case 1:
       l.add();
       break;
     case 2:
       l.del();
       break;
     case 3:
      l.toq();
      break;
      case 4:
      l.display();
      break;
     case 5:
      exit(0);
    }
  }while(1);
}