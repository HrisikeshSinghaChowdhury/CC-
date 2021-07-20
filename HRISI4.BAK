#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct sll
 {
   int data;
   struct sll *link;
 };

 struct sll*head;
 int c=1;
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
 void sorting(struct sll*ptr)
 {
 struct sll * save;
 struct sll * temp1;
 temp1=ptr;
 int t=0,i=1;
 while(temp1->link!=NULL)
 {
 c=c+1;
 temp1=temp1->link;
 }
 temp1=ptr;
 while(temp1->link!=NULL)
 {
 save=temp1->link;i=1;
 while(i<=c-1)
 {
 if((temp1->data)>(save->data))
 {
 t=temp1->data;
 temp1->data=save->data;
 save->data=t;
 }
 save=save->link;
 i=i+1;
 }
 c=c-1;
 temp1=temp1->link;
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
 sorting(head);
 printf("\n %d",c);
  printf("\n the new link list is");
  display(head);
 getch();
}
