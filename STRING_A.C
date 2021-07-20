/*************PROGRAM TO ARRANGE THE NAMES OF STUDENTS IN LEXICOGRAPHICAL ORDER USING SELECTION SORT************/
#include<stdio.h>
#include<conio.h>
#include<String.h>

void main()//Declaration of main function
{
   /*Declaration of variables*/
   char name[10][30],temp[30],small[30];
   int i,j,pos,total;
   clrscr();

   do
   {
	printf("\n Enter the number of students (Maximum 10 students) :");
	scanf("%d",&total);//Input the number of students
   }
   while(total>10);

   for(i=0;i<total;i++)
   {
	printf("\n Enter the name of student[%d] :",i+1);
	fflush(stdin);
	gets(name[i]);//Input the name of the students
   }

   for(i=0;i<total;i++)//Sort the names in lexicographical order using Selection sort
   {
	strcpy(small,name[i]);
	pos=i;
	for(j=i+1;j<total;j++)
	{
	      if(strcmp(name[j],small)<0)
	      {
		  strcpy(small,name[j]);
		  pos=j;
	      }
	}
	strcpy(temp,name[i]);
	strcpy(name[i],name[pos]);
	strcpy(name[pos],temp);
   }
   printf("\n The name of the students arranged in lexographical order is as follows \n");
   for(i=0;i<total;i++)
   {
	puts(name[i]);//Display the names
   }
   getch();
}
/********************OUTPUT*****************************

 Enter the number of students (Maximum 10 students) :12

 Enter the number of students (Maximum 10 students) :5

 Enter the name of student[1] :AHINDRA MONDAL

 Enter the name of student[2] :RANAJIT MONDAL

 Enter the name of student[3] :AKASH ROY

 Enter the name of student[4] :GURPREET SINGH

 Enter the name of student[5] :SOURAV GANGULY

 The name of the students arranged in lexographical order is as follows
AHINDRA MONDAL
AKASH ROY
GURPREET SINGH
RANAJIT MONDAL
SOURAV GANGULY
****************************************************/
