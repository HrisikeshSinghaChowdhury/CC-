/********************A program to check whether a year is leap or not**********/
#include<stdio.h>
#include<conio.h>
void main()
{
    int year,flag=0;
    clrscr();
    printf("\n Enter the year");
    scanf("%d",&year);
    if(year% 4 == 0 && year%100 != 0 || year%400 == 0)
	{
		flag++;
	}
    if(flag==0)
	 printf("\n %d year is not a leap year",year);
    else
	 printf("\n %d year is  a leap year",year);
    getch();
}
/*************OUTPUT*******************
**************1ST RUN*****************

 Enter the year  2003

 2003 year is not a leap year

****************2ND RUN***************

 Enter the year  2000

 2000 year is  a leap year
**************************************/




