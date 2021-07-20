#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct sll
 {
   int data;
   struct sll *link;
 };

 struct sll*head;
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
   }
  }
 }
void insert_beg(struct sll*ptr)
{
struct sll * new2,*temp;
temp=ptr;
new2=(struct sll*)malloc(sizeof(struct sll));
printf("\n enter the value of new node");
scanf("%d",&new2->data);
new2->link=temp;
head=new2;
display(head);
}

 void main()
{
 struct sll*head;
 clrscr();
 head=(struct sll*)malloc(sizeof(struct sll));
 createlist(head);
 printf("\n the link list is");

 display(head);
 printf("\n insert new item at beg");
 insert_beg(head);

 getch();
}
