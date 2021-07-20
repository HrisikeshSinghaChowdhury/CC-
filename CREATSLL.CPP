#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 struct sll
 {
   int data;
   struct sll *link;
 };
void createlist(struct sll *ptr)
{
 clrscr();
 char ch='Y';
 int i;
 struct sll*temp;
 temp=ptr;
 i=1;
  printf("\n enter the value for node number %d.  :",i);
  scanf("%d",&temp->data);
  temp->link=NULL;
  i++;
  printf("\n do you want to contune?press y/Y to continue otherwise n/N   :");
  fflush(stdin);
  scanf("%c",&ch);
  while(ch=='Y'||ch=='y')
  {
    temp->link=(struct sll*)malloc(sizeof(struct sll));
    if(temp->link==NULL)
    {
     printf("\n memory unavailabe.");
     return;
    }
    temp=temp->link;
    printf("enter the value for node number %d. :",i);
    scanf("%d",&temp->data);
    temp->link=NULL;
    i++;
    fflush(stdin);
    printf("\n do you want to continue?press y/Y to continue otherwise n/N  :");
    scanf("%c",&ch);

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
   while(temp!=NULL)
   {
   printf("%d ,",temp->data);
   temp=temp->link;
   }
  }
 }

 void main()
{
 struct sll*head;
 head=(struct sll*)malloc(sizeof(struct sll));
 createlist(head);
 printf("\n the link list is :\n");
 display(head);
 getch();
}
