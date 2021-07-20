#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
static int count=0,count2=0;
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
   count++;
   }
  }
 }
 void insert_beg(struct sll*ptr)
 {
 struct sll*new;
 printf("\n enter the value of the new node :");
 scanf("%d",&new->data);
 new->link=ptr;
 ptr=new;
 }
 void insert_end(struct sll*ptr)
 {
 struct sll*new;
 while(ptr->link!=NULL)
 ptr=ptr->link;
 printf("\n enter the value of the new node :");
 scanf("%d",&new->data);
 ptr->link=new;
 new->link=NULL;
 ptr=new;
 }
 void insert_after(struct sll*ptr)
 {
 int n;
 struct sll*new;
 struct sll*save;
 save=ptr;
 printf("\n enter the value of the new node :");
 scanf("%d",&new->data);
 printf("\n enter the value of the node before which you want to insert the new node :");
 scanf("%d",&n);
 if(ptr->link==NULL)
 {
 ptr->link=new;
 new->link=NULL;
 }
 else
 {
 while(save->link!=NULL)
 {
 save=ptr;
 ptr=ptr->link;
 if(save->data==n)
 {
 new->link=save->link;
 save->link=new;
 }
 }
 }
 }
 void delete_middle(struct sll*ptr)
 {
 int n;
 struct sll*save;
 printf("\n enter the value of the node which you want to delete :");
 scanf("%d",&n);
 while(ptr->link!=NULL)
 {
 if(ptr->data==n)
 {
 save->link=ptr->link;
 free(ptr);
 }
 save=ptr;
 ptr=ptr->link;
 }
 }

 void sort_ascending(struct sll*ptr)
 {
 int t,c=1;
 struct sll*temp1;
 struct sll*temp2;
 temp1=ptr;
 while(temp1->link!=NULL)
 {
 temp2=temp1->link;
 c=1;
 while(c<count)
 {
 if((temp1->data)>(temp2->data))
 {
 t=temp1->data;
 temp1->data=temp2->data;
 temp2->data=t;
 }
 c++;
 temp2=temp2->link;
 }count--;
 temp1=temp1->link;
 }
 }

 void sort_descending(struct sll*ptr)
 {
 int t,a;
 struct sll*temp1;
 struct sll*temp2;
 temp1=ptr;
 temp2=ptr->link;
 while(temp1->link!=NULL)
 {
 temp2=temp1->link;
 a=1;
 while(a<count2)
 {
 if((temp1->data)<(temp2->data))
 {
 t=temp1->data;
 temp1->data=temp2->data;
 temp2->data=t;
 }
 a++;
 temp2=temp2->link;
 }
 count2--;
 temp1=temp1->link;
 }
 }

 void main()
{
 struct sll*head;
 head=(struct sll*)malloc(sizeof(struct sll));
 createlist(head);
 printf("\n the  link list is :\n");
 display(head);
// insert_beg(head);
 printf("\n the new linked list is :\n");
 display(head);

 printf("\n the list in ascending order\n ");
 sort_ascending(head);
 display(head);
 /*
 printf("\n the list in descending order\n ");
 sort_descending(head);
 display(head);
 */
 getch();
}
