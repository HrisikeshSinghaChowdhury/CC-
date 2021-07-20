#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>


void main()
{
   int graphdriver = VGA,graphmode=VGAHI,x=260,y=12,i,j,k=45,t,c,midx,midy;


   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

   for(i=0;i<450;i++)
   {
	   cleardevice();
	   line(30+i,100,110+i,100);
	   line(110+i,100,130+i,120);
	   line(130+i,120,130+i,150);
	   line(30+i,150,50+i,150);
	   line(60+i,150,100+i,150);
	   line(110+i,150,130+i,150);
	   line(30+i,100,30+i,150);
	   line(30+i,105,114+i,105);
	   line(30+i,115,124+i,115);
	   rectangle(135+i,136,200+i,140);

	    circle(55+i,150,5);	// Back tyres of bus
	   circle(55+i,150,2);
	   circle(105+i,150,5);    // Front tyres of bus
	   circle(105+i,150,2);
	   outtextxy(35+i,130, " Hrisikesh");
	   delay(10);              //control the bus speed
   }
   /* clean up */
   getch();
   closegraph();


   return 0;
 }