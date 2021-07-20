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

 char ch='Y';
 int i;
 struct sll*temp;
 temp=ptr;
 i=1;
 clrscr();
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

 void display(struct sll*ptr5)
 {
  struct sll*temp5;
  temp5=ptr5;
  if(temp5==NULL)
  {
   printf("\n the list is empty ");
   return;
  }
  else
  {
   while(temp5!=NULL)
   {
   printf("%d ,",temp5->data);
   temp5=temp5->link;
   }
  }
 }
void del_successor(struct sll *ptr6)
{
  int item;
  struct sll*temp6;struct sll *save;
  temp6=ptr6;
 // save=ptr6;
  printf("\n Enter the successor node :");
  scanf("%d",&item);
  while(((((temp6->link)->link)->data)!=item)&&((((temp6->link)->link)!=NULL)))
  {
       temp6=temp6->link;
  }
  temp6->link=((temp6->link)->link);
  }

  void main()
{
 struct sll*head;
 head=(struct sll*)malloc(sizeof(struct sll));
 createlist(head);
 printf("\n the  link list is :\n");
 display(head);
 del_successor(head);
 printf("\n the new link list is :\n");
 display(head);
 getch();
}