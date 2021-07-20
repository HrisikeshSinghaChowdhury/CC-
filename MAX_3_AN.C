/*************A program to find the maximum between the three numbers********/
#include<stdio.h>
#include<conio.h>
void main()
{
    /*Declaration of variables*/
    int num1,num2,num3,max;
    clrscr();
    /*Input the numbers*/
    printf("\n Enter the first number :");
    scanf("%d",&num1);
    printf("\n Enter the second number :");
    scanf("%d",&num2);
    printf("\n Enter the third number :");
    scanf("%d",&num3);

    if(num1>=num2 && num1>=num3)
	   max=num1;
    if(num2>=num1 && num2>=num3)
	   max=num2;
    if(num3>=num1 && num3>=num2)
	   max=num3;
    printf("\n The maximum between the three numbers is %d",max);


    getch();
}
/******************OUTPUT*****************
*****************1ST RUN******************

 Enter the first number :12

 Enter the second number :34

 Enter the third number :45

 The maximum between the three numbers is 45

*****************************************
****************2ND RUN******************

 Enter the first number :100

 Enter the second number :100

 Enter the third number :50

 The maximum between the three numbers is 100
*********************************************/
