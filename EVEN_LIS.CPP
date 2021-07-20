#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct sll
 {
   int data;
   struct sll *link;
 };

 struct sll*head;
 int c=1,cnt=0;
void createlist(struct sll *ptr)
{
 char ch;
 int i;
 struct sll*temp;
 temp=ptr;
 i=1;
  printf("enter the value for node %d",i);
  scanf("%d",&temp->data);
  temp->link=NULL;
  i++;
  printf("\n do you want to contune");
  fflush(stdin);
  ch=getchar();
  while(ch=='Y'||ch=='y')
  {
    temp->link=(struct sll*)malloc(sizeof(struct sll));
    if(temp->link==NULL)
    {
     printf("\n memory unavailabe");
     return;
    }
    temp=temp->link;
    printf("enter the value for node no %d",i);
    scanf("%d",&temp->data);
    temp->link=NULL;
    i=i++;
    printf("\n do you want to continue?(y/n)");
    fflush(stdin);
    ch=getchar();
  }
}

 void display(struct sll*ptr)
 {
  struct sll*temp;
  temp=ptr;
  if(temp==NULL)
  {
   printf("\n the list is empty ");
   return;
  }
  else
  {
  temp=ptr;
   while(temp!=NULL)
   {
   printf(" %d ",temp->data);
   temp=temp->link;
   cnt=cnt+1;
   }
  }
 }
 void even_list(struct sll*ptr)
 {
 struct sll * save;
 struct sll * new1;
 struct sll * fn1;
 struct sll * temp;
 new1=NULL;
 fn1=NULL;
 temp=ptr;
 save=ptr;
 while(cnt>=0)
 {
 if(temp->data%2==0)
 {
 fn1=save;
 fn1->link=new1;
 new1=fn1;
 }
 save=temp;
 temp=temp->link;
 cnt=cnt-1;
 }
 while(new1->link!=NULL)
 {
 printf("%d",new1->data);
 new1=new1->link;
 }
 }
 void main()
 {
 struct sll*head;

 clrscr();
 head=(struct sll*)malloc(sizeof(struct sll));

 createlist(head);

 printf("\n the link list is");

 display(head);
 printf("\n the new even link list is");
 even_list(head);
 getch();
}
