/*====================MARK SHEET================*/
#include<stdio.h>
#include<conio.h>
void main()
{  /*Declaration of variables*/
   int a,b,c,d,e,f,t;
   float ave;
   char grade;
   /*Input the marks of five subjects*/
   clrscr();
   printf("\n enter the marks in english\n");
   scanf("%d",&a);
   printf("\n enter the marks in bengali\n");
   scanf("%d",&b);
   printf("\n enter the marks in science\n");
   scanf("%d",&c);
   printf("\n enter the marks in maths\n");
   scanf("%d",&d);
   printf("\n enter the marks in environmental science\n");
   scanf("%d",&e);
   /*Dispaly the marks of five subjects*/
   printf("\n****************REPORT CARD******************\n");
   printf("\n SUBJECT\t\t\t\t\tMARKS\n");
   printf("\nENGLISH\t\t\t\t\t\t%d",a);
   printf("\nBENGALI\t\t\t\t\t\t%d",b);
   printf("\nSCIENCE\t\t\t\t\t\t%d",c);
   printf("\nMATHS\t\t\t\t\t\t%d",d);
   printf("\nE.V.E\t\t\t\t\t\t%d",e);
   /*Find the total marks*/
   t=a+b+c+d+e;
   printf("\n***********************************************\n");
   printf("\nTOTAL MARKS \t\t\t\t\t%d",t);
   /*Find the average*/
   ave=(float)t/5;
   printf("\nAVERAGE MARKS\t\t\t\t\t%f",ave);
   /*Find the grade accordingly*/
   if(ave>=80)
	{
	grade='A';
	}
   if(ave>=65&&ave<80)
	{
	grade='B';
	}
   if(ave>=50&&ave<65)
	{
	grade='C';
	}
   if(ave>=35&&ave<50)
	{
	grade='D';
	}
   if(ave<35)
	{
	grade='F';
	}
   printf("\nGRADE IS \t\t\t\t\t%c",grade);
   getch();

}
/*===============OUTPUT===================*/
/***************1ST RUN***************
45

 enter the marks in science
68

 enter the marks in maths
90

 enter the marks in environmental science
69

****************REPORT CARD******************

 SUBJECT                                        MARKS

ENGLISH                                         45
BENGALI                                         45
SCIENCE                                         68
MATHS                                           90
E.V.E                                           69
***********************************************

TOTAL MARKS                                     317
AVERAGE MARKS                                   63.400002
GRADE IS                                        C
*/
/*********************2ND RUN**************
67

 enter the marks in science
80

 enter the marks in maths
90

 enter the marks in environmental science
94

****************REPORT CARD******************

 SUBJECT                                        MARKS

ENGLISH                                         79
BENGALI                                         67
SCIENCE                                         80
MATHS                                           90
E.V.E                                           94
***********************************************

TOTAL MARKS                                     410
AVERAGE MARKS                                   82.000000
GRADE IS                                        A
*/