#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
   int graphdriver = VGA,graphmode=VGAHI,newx=0,newy=0;
   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

   while(!kbhit())
   {

   rectangle(60+newx,100,160+newx,240);
   rectangle(160+newx,140,220+newx,240);

   line(220+newx,160,340+newx,160);
   line(220+newx,240,370+newx,240);

   line(370+newx,240,370+newx,290);
   line(370+newx,240,380+newx,290);
   line(370+newx,240,400+newx,290);
   line(370+newx,240,410+newx,290);
   line(650,290,0,290);
   ellipse(340+newx,200,0,360,5,40);

   rectangle(290+newx,120,310+newx,160);//chimney

   circle(310+newx,265,20);
   circle(270+newx,265,20);
   circle(230+newx,265,20);
   circle(80+newx,265,20);
   circle(130+newx,265,20);
   rectangle(170+newx,240,190+newx,270);
   rectangle(190+newx,240,200+newx,260);

   rectangle(250+newx,200,320+newx,230);
   circle(340+newx,275,10);
   circle(363+newx,274,10);
   arc(260+newx,80,90,160,20);
   arc(270+newx,100,70,120,30);
   arc(275+newx,120,50,110,20);
   arc(220+newx,90,90,110,24);


   newx=newx+10;
   if(newx>=600)
   newx=0;
   delay(100);
   cleardevice();
   }

   getch();
}


