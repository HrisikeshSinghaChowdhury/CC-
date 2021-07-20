/******A PROGRAM FOR FITTING A STRAIGHT LINE THROUGH A SET OF POINTS(xi,yi),i=1,..,n.THE STRAIGHT LINE EQUATION IS y=mx+c***********/
#include<stdio.h>
#include<conio.h>
void main()
{
   /*Declaration of variables*/
   int x[26],y[26],i,n;
   float total_x=0,total_y=0,total_xy=0,total_square_x=0,m,c,numerator,denominator,temp;
   char ch='A';
   clrscr();

   printf("\n Enter the value of n  :");
   scanf("%d",&n);//Value of n must be greater than 2

   for(i=0;i<n;i++)
   {
      printf("\n Enter the x word of point %c :",ch);
      scanf("%d",&x[i]);
      printf("\n Enter the y word of point %c :",ch);
      scanf("%d",&y[i]);
      ch++;
   }
   ch='A';
   for(i=0;i<n;i++)
   {
      printf("\n Coordinate of point %c(%d,%d)",ch,x[i],y[i]);
      ch++;
   }

   for(i=0;i<n;i++)
   {
      total_xy = total_xy + (x[i]*y[i]);
      total_x = total_x + x[i];
      total_y = total_y + y[i];
      total_square_x=total_square_x + (x[i]*x[i]) ;
   }

   numerator=((n*total_xy)-(total_x*total_y));
   denominator=(n*total_square_x)-(total_x*total_x);
   if(denominator!=0)
   {
       m=numerator/denominator; //m is the slope  of the straight line
       temp=m*total_x;
       c=((total_y-temp)/(n));  //c is the intercept of the straight line

       if(m!=(float)0)
       {
	  if(c>=(float)0)
	  {
	     printf("\n The equation of the straight line is \n");
	     printf("\n y=%fx+%f",m,c);
	  }
	  else
	  {
	     printf("\n The equation of the straight line is \n");
	     printf("\n y=%fx%f",m,c);
	  }
       }
       else
       {
	  if(c!=(float)0)
	  {
	     printf("\n The equation of the straight line is \n");
	     printf("\n y=%f",c);
	  }
	  else
	  printf("\nThe straight line is the x-axis itself\n");
       }
   }
   else
   {
      printf("\n The equation of the straight line is not possible with the following points.");
   }
   getch();
}
/***********************OUTPUT******************************
************************1ST RUN*****************************

 Enter the value of n  :3

 Enter the x word of point A :-7

 Enter the y word of point A :9

 Enter the x word of point B :-2

 Enter the y word of point B :0

 Enter the x word of point C :-4

 Enter the y word of point C :-2

 Coordinate of point A(-7,9)
 Coordinate of point B(-2,0)
 Coordinate of point C(-4,-2)
 The equation of the straight line is

 y=-1.947368x-6.105263
*************************************************
**************2ND RUN*****************************

 Enter the value of n  :3

 Enter the x word of point A :12

 Enter the y word of point A :11

 Enter the x word of point B :34

 Enter the y word of point B :1

 Enter the x word of point C :-9

 Enter the y word of point C :3

 Coordinate of point A(12,11)
 Coordinate of point B(34,1)
 Coordinate of point C(-9,3)
 The equation of the straight line is

 y=-0.049748x+5.613554

******************************************************
***************3RD RUN**************************************
 Enter the value of n  :4

 Enter the x word of point A :-1

 Enter the y word of point A :1

 Enter the x word of point B :2

 Enter the y word of point B :1

 Enter the x word of point C :3

 Enter the y word of point C :1

 Enter the x word of point D :4

 Enter the y word of point D :1

 Coordinate of point A(-1,1)
 Coordinate of point B(2,1)
 Coordinate of point C(3,1)
 Coordinate of point D(4,1)
 The equation of the straight line is

 y=1.000000
********************************************************
******************4TH RUN*******************************

 Enter the value of n  :3

 Enter the x word of point A :-9

 Enter the y word of point A :0

 Enter the x word of point B :5

 Enter the y word of point B :0

 Enter the x word of point C :12

 Enter the y word of point C :0

 Coordinate of point A(-9,0)
 Coordinate of point B(5,0)
 Coordinate of point C(12,0)
The straight line is the x-axis itself
**********************************************************/